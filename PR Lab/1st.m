clc
clear all
a=[1 2 5 8;4 3 2 1;3 7 4 5;10 7 8 9]
a;
for i=1;10
    for j=1:10
        b(1,j)=j;
    b(2,j)=0;
    i=i+1;
end
end
b
for i=1:4
    for j=1:4
    for k=1:10
        if a(i,j)==b(1,k)
            b(2,k)=b(2,k)+1;
        end
    end
    end
end
b

    