grammar pascal;

E : '=' ;
NE : '<>' ;
L : '<' ;
LE : '<=' ;
G : '>' ;
GE : '>=' ;

MUL : '*' ;
DIV : 'div' ;
MOD : 'mod' ;
ADD : '+' ;
SUB : '-' ;

NUM : [0-9]+ ;
SEP : ';' ;
NEWLINE : '\r' ? '\n' -> skip ;
STRING_CONSTANT : '\'' (.*?) '\'' ;
ID : [a-zA-Z][a-zA-Z0-9]* ;
variable : ID ;
WS : [ \t]+ -> skip;

program : ('const' const_variable_declaration_list)? ('var' variable_declaration_list)? compound_statement '.' ;


const_variable_declaration_list : const_variable_declaration (const_variable_declaration)* ;
const_variable_declaration : ID ':' type_identifier '=' NUM SEP ;
variable_declaration_list : variable_declaration_sublist (variable_declaration_sublist)* ;
variable_declaration_sublist : ID (',' ID)* ':' type_identifier SEP ;
type_identifier : 'integer' ;



compound_statement : 'begin' statement_list 'end' ;

statement_list : statement SEP	                   	# SimpleStatement
               | statement_list statement_list          # ComplexStatement
               ;

statement : compound_statement
          | assignment_statement
          | write_statement
          | read_statement
          | if_statement
          ;

assignment_statement : ID ':=' expr ;

write_statement : write | writeln ;
write : 'write' '(' writeable ')' ;
writeln : 'writeln' '(' writeable ')' ;
writeable : expr 		#WriteExpr
	  | STRING_CONSTANT	#WriteStrConst
	  ;

read_statement : 'read' '(' ID ')' ;

if_statement : 'if' compared_expression 'then' statement ('else' statement)? ;

expr : sexpr ;

sexpr : '(' sexpr ')'				# parens
      | sexpr op=(MUL | DIV | MOD) sexpr	# MulDiv
      | sexpr op=(ADD | SUB) sexpr		# AddSub
      | variable 				# Variabl
      | NUM					# Num
      ;

compared_expression : expr 							#ExpressionToBool
		    | expr comp=(E | NE | L | LE | G | GE) expr 		#CompareExpressions
		    ;