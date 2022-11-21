grammar BabyCobol;

program     : identification (data)? procedure EOF;

identification  :   IDENTIFICATION DIVISION DOT (name DOT value DOT)*;
name            :   IDENTIFIER;
value           :   LITERAL;

data            :   DATA DIVISION line*;
line            :   (record | field);
record          :   level IDENTIFIER DOT;
field           :   level IDENTIFIER (PICTURE IS representation | LIKE identifiers) (OCCURS int TIMES)? DOT;
level           :   int; // todo: should be exactly two numbers
representation  :   (NINE | X); // NOTE: This makes it impossible to use these as variable names

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

label           :   IDENTIFIER;
display         :   DISPLAY atomic+ (WITH NO ADVANCING)?;
stop            :   STOP;
move            :   MOVE (SPACES | HIGH | LOW | atomic) TO identifiers+;
subtract        :   SUBTRACT as+=atomic+ FROM from=atomic (GIVING giving=identifiers)?;
multiply        :   MULTIPLY a=atomic BY as+=atomic+ (GIVING giving=identifiers)?;
perform         :   PERFORM procedureName=label (THROUGH through=label)? (times=atomic TIMES)?;
ifStatement     :   IF booleanExpression THEN t+=statement+ (ELSE f+=statement+)? (END | DOT);
accept          :   ACCEPT id+=identifiers+;
add             :   ADD atomic+ TO to=atomic (GIVING id=identifiers)?;
divide          :   DIVIDE a=atomic INTO as+=atomic+ (GIVING id=identifiers)? (REMAINDER rem=identifiers)?;
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
                |   identifiers                 #identifier
                ;

identifiers     :   IDENTIFIER (OF IDENTIFIER)* ('(' int ')')?;

int             :   INT | NINE;

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
NINE:       [9]+;
X:          [X]+;

COMMENTLINE     :   '*' WS '\n' -> skip;
IDENTIFIER      :   VAR ('-' VAR)* INT?;
INT             :   '-'? ([0-9]+ | NINE);
LITERAL         :   '"' ~'"'+ '"'; // Any char except for "
DOT             :   '.';
VAR             :   [A-Za-z]+;

WS              :   [ \r\n\t\f]+ -> skip;
