%{
	#include<stdio.h>
	#include<stdlib.h>
%}
%%
"while"|"WHILE"|"While"|"do"|"DO"|"Do"|"break"|"BREAK"|"Break"|"case"|"CASE"|"Case"

 		{
			printf("%s->Keyword\n",yytext);
		}
[0-9][a-zA-Z_]([a-zA-Z0-9_])* {
			printf("%s->Valid Identifier\n",yytext);
		}

"<>" {
			printf("%s->Not equal\n",yytext);
		}
"<" {
			printf("%s->Less\n",yytext);
		}
">" {
			printf("%s->Greater\n",yytext);
		}
"<=" {
			printf("%s->LESSEQUAL\n",yytext);
		}
">=" {
			printf("%s->GREATEREQUAL\n",yytext);
		}

.* {
			printf("%s->Invalid Identifier",yytext);
		}
%%
int yywrap(void) {
	return 1;
}
int main(void) {
	yylex();
	return 0;
}