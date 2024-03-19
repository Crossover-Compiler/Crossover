grammar BabyCobol;

program             : identificationDiv (dataDivision)? procedure EOF;

identificationDiv   :   IDENTIFICATION DIVISION DOT identificationEntry*;
identificationEntry :   (IDENTIFIER DOT LITERAL DOT);

dataDivision        :   DATA DIVISION DOT lines+=line*;
line                :   record | field;
record              :   LEVEL IDENTIFIER DOT;
field               :   LEVEL IDENTIFIER ((PICTURE IS MASK) | (LIKE identifiers)) (OCCURS INT TIMES)? DOT;

procedure       :   PROCEDURE DIVISION DOT paragraph*;
paragraph       :   label (USING atomic+)? DOT sentence* (END DOT);

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
                |   callStatement
                );

label           :   IDENTIFIER;
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
loop            :   LOOP loopExpression statement* END;
gotoStatement   :   GO TO IDENTIFIER;
signal          :   SIGNAL (label | OFF) ONERROR;
alter           :   ALTER l1=label TO PROCEED TO l2=label;
callStatement   :   CALL function_name=IDENTIFIER (OF program_name=IDENTIFIER)?
                        (USING
                            (
                                (
                                    (BYVALUE byvalueatomicsprim+=atomic+ AS PRIMITIVE) |
                                    (BYREFERENCE byreferenceatomicsprim+=atomic+ AS PRIMITIVE) |
                                    (byvalueatomicsprim+=atomic+ AS PRIMITIVE) |

                                    (BYVALUE byvalueatomicsstruct+=atomic+ AS STRUCT) |
                                    (BYREFERENCE byreferenceatomicsstruct+=atomic+ AS STRUCT) |
                                    (byvalueatomicsstruct+=atomic+ AS STRUCT) |

                                    (BYVALUE byvalueatomicsprim+=atomic+) |
                                    (BYREFERENCE byreferenceatomicsprim+=atomic+) |
                                    (byvalueatomicsprim+=atomic+)
                                )
                            )+
                        )?
                        (RETURNING (BYVALUE | reference_return=BYREFERENCE)? returning=identifiers (AS (primitive_return=PRIMITIVE | STRUCT))?)?; // TODO: Test if the identifiers and literals are added to the lists correctly

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
                        ;

contractedBooleanPart   :   booleanOp comparisonOp? arithmeticExpression;

comparisonOp    :   NEQ
                |   LT
                |   LTE
                |   EQ
                |   GT
                |   GTE
                ;

booleanOp       :   OR
                |   AND
                |   XOR
                ;

arithmeticOp    :   SYMBOL_PLUS
                |   SYMBOL_MINUS
                |   SYMBOL_MULT
                |   SYMBOL_DIV
                |   SYMBOL_EXP
                ;

whenBlock       :   WHEN anyExpression+ statement+      #whenAnyExpression
                |   WHEN OTHER statement+               #whenOther
                ;

atomic          :   int                         #intLiteral
                |   DOUBLE                      #doubleLiteral
                |   LITERAL                     #stringLiteral
                |   identifiers                 #identifier
                ;
//program_name    : IDENTIFIER;

identifiers     :   IDENTIFIER (OF IDENTIFIER)* ('(' int ')')?;

int             :   ('-'|'+')? INT;

// Keywords & symbol names
STRUCT: 'STRUCT';
PRIMITIVE: 'PRIMITIVE';
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
CALL:       'CALL';
RETURNING:  'RETURNING';
BYVALUE:    'BY VALUE';
BYREFERENCE:'BY REFERENCE';
RETURNINGBYREFERENCE: RETURNING BYREFERENCE;
USING:      'USING';
AS:         'AS';

NEQ : '!=';
LTE : '<=';
LT  : '<';
EQ  : '=';
GT  : '>';
GTE : '>=';

SYMBOL_PLUS     : '+';
SYMBOL_MINUS    : '-';
SYMBOL_MULT     : '*';
SYMBOL_DIV      : '/';
SYMBOL_EXP      : '**';

WS              :   [ \r\n\t\f]+ -> skip;
FUNCTIONNAME    :   '\''IDENTIFIER'\'';
MASK            :   [VSAX9]*;
LEVEL           :   [0-9][0-9];
INT             :   [0-9]+;
DOUBLE          :   ('-'|'+')? INT ',' INT;
LITERAL         :   '"' ~'"'+ '"'; // Any char except for "
DOT             :   '.';
IDENTIFIER      : [a-zA-Z0-9]+ ([-_]+ [a-zA-Z0-9]+)*;
COMMENTLINE     :   '*' ~[\r\n]* -> skip;
