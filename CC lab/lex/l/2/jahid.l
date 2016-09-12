%{
	#include<stdio.h>
	#include<stdlib.h>
	int worda=0,digita=0,newlinea=0,spacea=0,sentencea;
%}
sentence([a-zA-Z_])*[.]
word([a-zA-Z_])*
digit[0-9]*
newline[\n]*
space(" ")*
%%
{sentence} {
sentencea++;
}
{word} {
worda++;
}
{space} {
	spacea++;
}
{newline} {
	newlinea++;
}
{digit} {
	digita++;
}
%%
int yywrap(void) {
	return 1;
}
int main(void) {
	yyin=fopen("myfile.txt","r");
	yylex();
	printf("Num of sentence:%d\n",sentencea);
	printf("Num of word:%d\n",worda);
	printf("Num of digit:%d\n",digita);
	printf("Num of newline:%d\n",newlinea);
	printf("Num of space:%d\n",spacea);
	return 0;
}