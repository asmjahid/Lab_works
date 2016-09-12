clear all;
clc;
x = input('Enter any no:','s');
x=STR2NUM(x);
y = x+1;

%Plot
x=[1 2 3 4 5];
y=[-3 4 1 5 3];
%z=[2 3 5 8 2];
plot(x,y,'o r')