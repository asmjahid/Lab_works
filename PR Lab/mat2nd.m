clc
clear all
a=[3 4 1;2 3 4;1 2 3];
b=[1 2 3;4 5 6;7 8 9];
for i=1:3
   for j=1:3
       C(i,j)=a(i,1)*b(1,j)+a(i,2)*b(2,j)+a(i,3)*b(3,j)
   end
end
m=a*b
C