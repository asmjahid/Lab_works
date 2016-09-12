a = [ 1 2 3 4 ; 4 3 3 2; 5 6 10 10; 12 7 12 10]


x=[ 1 2 3 4 

4 3 3 2

5 6 10 10

12 7 12 10];

[a,b]=hist(x,unique(x));

out=[b' sum((a),2)]



y = zeros(size(x));

for i = 1:length(x)

y(i) = sum(x==x(i));

end

