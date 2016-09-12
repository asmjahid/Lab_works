%{
    #include <stdio.h>
    #include <stdlib.h>
%}
id [0-9][a-zA-Z_]([a-zA-Z0-9_])*
keyword "while"|"WHILE"|"While"|"do"|"DO"|"Do"|"break"|"BREAK"|"Break"|"case"|"CASE"|"Case"
%%
{keyword}	{
				printf("Keyword");
			}

{id}		{
				printf("Indentifier");
			}
"<>" 
		{
			printf("%s->Not equal\n",yytext);
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