clc
clear all
A=[3 4 1;2 3 4;1 2 3];
B=[1 2 3;4 5 6;7 8 9];
[Row1,Col1]=size(A);
S=[Row1,Col1];
S
[Row2,Col2]=size(B);
R=[Row2,Col2];
R
C=zeros(Row1,Col2);
C
for i=1:Row1
   for j=1:Col2
     for k=1:Col1 
        C(i,j)=C(i,j)+A(i,k)*B(k,j);
     end
   end
end
C