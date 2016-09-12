%{
    #include <stdio.h>
    #include <stdlib.h>    
%}
%%
"if"|"IF"|"else"|"ELSE"|"then"|"THEN"|"or"|"OR"|"and"|"AND"|"while"|"WHILE"|"do"|"DO"|"for"|"FOR"|"switch"|"SWITCH"|"continue"|"CONTINUE"|"break"|"BREAK" {
             printf("Keyword");
			}
[a-zA-Z_]([a-zA-Z0-9_])* { 
			 printf("Indentifier");
			 }
.* {
			 printf("Invalid");
			}
%%
int yywrap(void) {
    return 1;
}
int main(void) {
    yylex();
    return 0;
}