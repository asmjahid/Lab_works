%{
    #include <stdio.h>
    #include <stdlib.h>    
%}
%%
"a"|"A"      {                
                printf("%s -> Indifinite Article\n", yytext);
          }
"an"|"An" {
  printf("%s -> Indifinite Article\n", yytext);
 }
"the"|"The" {
  printf("%s -> Definite Article\n", yytext);
 }
([a-zA-Z])* { 
  printf("%s -> Not an article\n", yytext);
  }
[ \t\n] {       printf("%s -> space\n", yytext);
 }
.           printf("other characters\n", yytext);
%%
int yywrap(void) {
    return 1;
}
int main(void) {
    yylex();
    return 0;
}