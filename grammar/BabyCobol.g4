grammar BabyCobol;

program     : identification (data)? procedure EOF;

identification  :   IDENTIFICATION DIVISION DOT (name DOT value DOT)*;
name            :   identifier;
value           :   LITERAL;

data            :   DATA DIVISION lines+=line*;
line            :   record | field;
record          :   level identifier DOT;
field           :   level identifier (PICTURE IS representation | LIKE identifiers) (OCCURS INT TIMES)? DOT;
level           :   int; // todo: should be exactly two numbers

// TODO: AVX is recognised as VAR. A V X is recognised as valid picture. TODO: Find a way to not need the spaces. Hint: this has to do with the greedy-ness of the VAR rule.
representation  :   leadingS=S leadingZ+=Z* (NINE|A|X|V)+
                |   leadingZ+=Z* (NINE|A|X|V)+ trailingS=S
                |   leadingZ+=Z* (NINE|A|X|V)+;

procedure       :   PROCEDURE DIVISION DOT sentence* paragraph+;
paragraph       :   label DOT sentence+;

sentence        :   statement+ DOT;

statement       :
                (   '*' | '-'   )?
                (   display
                |   stop
                |   move
                |   subtract
                |   multiply
                |   perform
                |   ifStatement
                |   accept
                |   add
                |   divide
                |   evaluate
                |   nextSentence
                |   loop
                |   gotoStatement
                |   signal
                |   alter
                );

label           :   identifier;
display         :   DISPLAY atomic+ (WITH NO ADVANCING)?;
stop            :   STOP;
move            :   MOVE (SPACES | HIGH | LOW | atomic) TO identifiers+;
subtract        :   SUBTRACT as+=atomic+ FROM from=atomic (GIVING giving=identifiers)?;
multiply        :   MULTIPLY at=atomic BY as+=atomic+ (GIVING giving=identifiers)?;
perform         :   PERFORM procedureName=label (THROUGH through=label)? (times=atomic TIMES)?;
ifStatement     :   IF booleanExpression THEN t+=statement+ (ELSE f+=statement+)? (END | DOT);
accept          :   ACCEPT id+=identifiers+;
add             :   ADD atomic+ TO to=atomic (GIVING id=identifiers)?;
divide          :   DIVIDE at=atomic INTO as+=atomic+ (GIVING id=identifiers)? (REMAINDER rem=identifiers)?;
evaluate        :   EVALUATE anyExpression whenBlock* END;
nextSentence    :   NEXT SENTENCE;
loop            :   LOOP loopExpression* END;
gotoStatement   :   GO TO name;
signal          :   SIGNAL (label | OFF) ONERROR; // TODO: NOTE: identifiers can only be an identifier of a paragraph here
alter           :   ALTER l1=label TO PROCEED TO l2=label;

anyExpression   :   arithmeticExpression
                |   stringExpression
                |   booleanExpression
                ;

arithmeticExpression    :   atomic                                                                                  #atomicArithmeticExp
                        |   left=arithmeticExpression arithmeticOp right=arithmeticExpression                       #arithOpArithmeticExp
                        ;

stringExpression        :   atomic                                                                                  #atomicStringExp
                        |   left=stringExpression '+' right=stringExpression                                        #additionStringExp
                        ;

booleanExpression       :   TRUE                                                                                    #trueBooleanExp
                        |   FALSE                                                                                   #falseBooleanExp
                        |   left=atomic comparisonOp right=arithmeticExpression contract+=contractedBooleanPart+    #contractedBooleanExp
                        |   left=arithmeticExpression comparisonOp right=arithmeticExpression                       #compareOpBooleanExp
                        |   NOT booleanExpression                                                                   #notBooleanExp
                        |   left=booleanExpression booleanOp right=booleanExpression                                #boolOpBooleanExp
                        ;

loopExpression          :   VARYING id=identifiers? (FROM from=atomic)? (TO to=atomic)? (BY by=atomic)?             #varyingLoopExp
                        |   WHILE booleanExpression                                                                 #whileLoopExp
                        |   UNTIL booleanExpression                                                                 #untilLoopExp
                        |   statement                                                                               #loopStatement
                        ;

contractedBooleanPart   :   booleanOp comparisonOp? arithmeticExpression;

comparisonOp    :   '='
                |   '>'
                |   '<'
                |   '>='
                |   '<='
                |   '!='
                ;

booleanOp       :   OR
                |   AND
                |   XOR
                ;

arithmeticOp    :   '+'
                |   '-'
                |   '*'
                |   '/'
                |   '**'
                ;

whenBlock       :   WHEN anyExpression+ statement+      #whenAnyExpression
                |   WHEN OTHER statement+               #whenOther
                ;

atomic          :   int                         #intLiteral
                |   LITERAL                     #stringLiteral
                |   identifiers                 #identifierAtomic
                ;

identifiers     :   identifier (OF identifier)* ('(' int ')')?;

int             :   INT | NINE;

var:(VAR| A | X | Z | S | V)+;

// Keywords & symbol names
IDENTIFICATION: 'IDENTIFICATION';
DIVISION:   'DIVISION';
PROCEDURE:  'PROCEDURE';
DATA:       'DATA';
DISPLAY:    'DISPLAY';
WITH:       'WITH';
NO:         'NO';
ADVANCING:  'ADVANCING';
STOP:       'STOP';
MOVE:       'MOVE';
TO:         'TO';
SUBTRACT:   'SUBTRACT';
FROM:       'FROM';
GIVING:     'GIVING';
MULTIPLY:   'MULTIPLY';
BY:         'BY';
PERFORM:    'PERFORM';
TIMES:      'TIMES';
IF:         'IF';
THEN:       'THEN';
ELSE:       'ELSE';
END:        'END';
ACCEPT:     'ACCEPT';
ADD:        'ADD';
DIVIDE:     'DIVIDE';
INTO:       'INTO';
EVALUATE:   'EVALUATE';
WHEN:       'WHEN';
OTHER:      'OTHER';
TRUE:       'TRUE';
FALSE:      'FALSE';
NOT:        'NOT';
OR:         'OR';
AND:        'AND';
XOR:        'XOR';
NEXT:       'NEXT';
SENTENCE:   'SENTENCE';
REMAINDER:  'REMAINDER';
LOOP:       'LOOP';
VARYING:    'VARYING';
WHILE:      'WHILE';
UNTIL:      'UNTIL';
OF:         'OF';
THROUGH:    'THROUGH';
PICTURE:    'PICTURE';
IS:         'IS';
LIKE:       'LIKE';
OCCURS:     'OCCURS';
GO:         'GO';
SPACES:     'SPACES';
HIGH:       'HIGH-VALUES';
LOW:        'LOW-VALUES';
SIGNAL:     'SIGNAL';
ONERROR:    'ON ERROR';
OFF:        'OFF';
ALTER:      'ALTER';
PROCEED:    'PROCEED';
NINE:       '9'+;
A:          'A'+;
X:          'X'+;
Z:          'Z'+;
S:          'S';
V:          'V';

COMMENTLINE     :   '*' WS '\n' -> skip;
WS              :   [ \r\n\t\f]+ -> skip;
identifier      :   var ('-' var)* INT?;
//int_             :   INT | nine;
INT            : '-'? [0-9]+;
LITERAL         :   '"' ~'"'+ '"'; // Any char except for "
DOT             :   '.';

VAR             :   [A-Za-z]+;



