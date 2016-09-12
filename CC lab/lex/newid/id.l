%{
    #include <stdio.h>
    #include <stdlib.h>
%}
id [a-zA-Z_]([a-zA-Z0-9_])*
keyword "if"|"IF"|"If"|"else"|"ELSE"|"Else"|"then"|"THEN"|"Then"|"or"|"OR"|"Or"|"and"|"AND"|"And"|"while"|"WHILE"|"While"|"do"|"DO"|"Do"|"for"|"FOR"|"For"|"switch"|"SWITCH"|"Switch"|"continue"|"CONTINUE"|"Continue"|"break"|"BREAK"|"Break"
%%
{keyword}	{
				printf("Keyword");
			}
{id}		{
				printf("Indentifier");
			}
.*			{
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