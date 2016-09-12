%{
	#include<stdio.h>
	#include<stdlib.h>
%}
%%
"if"|"else"|"switch"|"case"|"break"|"continue"|"for"|"while"|"do" {
	printf("%s->Keyword\n",yytext);
}
[0-9]([a-z_])* {
	printf("%s->Valid Identifier\n",yytext);
}
[0-9]([A-Z_])* {
	printf("%s->InValid Identifier\n",yytext);
}

"<=" {
  printf("%s -> Lessthan equal\n", yytext);
 }
">=" {
  printf("%s -> Greater equal\n", yytext);
 }

">" {
  printf("%s -> Greater\n", yytext);
 }
"<" {
  printf("%s -> Less\n", yytext);
 }
"=" {
  printf("%s -> Equal\n", yytext);
 }
"=!" {
  printf("%s -> Not equal\n", yytext);
 }
%%
int yywrap(void) {
	return 1;
}
int main(void) {
	yyin=fopen("myfile.txt","r");
	yylex();
	return 0;
}