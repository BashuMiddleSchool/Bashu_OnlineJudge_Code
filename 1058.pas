program armstrong;
var i,n,sum,inp:integer;
d:byte;
begin
readln(inp);
for i:=1 to inp do
begin
n:=i;
sum:=0;
while n>0 do
begin
d:=n mod 10;
n:=n div 10;
sum:=sum+d*d*d;
end;
if sum=i then
writeln(sum);
end;
readln();
end.