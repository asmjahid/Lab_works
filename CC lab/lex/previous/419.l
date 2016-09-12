%{
    #include <stdio.h>
    #include <stdlib.h>
%}
valid [0-9]([a-z_])*
invalid [0-9]([A-Z_])*
keyword "if"|"else"|"switch"|"case"|"break"|"continue"|"for"|"while"|"do"
Lessthanequal "<="
Greaterthanequal ">="
Greater ">"
Less "<"
Equal "="
Notequal "<>"
%%
{keyword}	{
				printf("Keyword");
			}

{valid}		{
				printf("Valid Indentifier");
			}

{invalid}
			{
				printf("Invalid Indentifier");
			}

{Lessthanequal}			{
				printf("Less than equal");
			}
{Greaterthanequal}			{
				printf("Greater than equal");
			}
{Less}			{
				printf("Less");
			}
{Equal}			{
				printf("Equal");
			}
{Notequal} {
				printf("Notequal");
			}
. {
				printf("invalid");
			}
%%
int yywrap(void) {
    return 1;
}
int main(void) {
    yylex();
    return 0;
}