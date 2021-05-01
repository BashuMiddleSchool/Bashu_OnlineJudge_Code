program fun;
var
a,b,c:array[1..100,1..100] of integer;
m,n,h,i,j,s,k:integer;
begin
read(m);
read(n);
read(h);

for i:=1 to m do
for j:=1 to n do read(a[i,j]);

for i:=1 to n do
for j:=1 to h do read(b[i,j]);
for i:=1 to m do
for j:=1 to h do
begin
s:=0;
for k:=1 to n do s:=s+a[i,k]*b[k,j];
c[i,j]:=s;
end;
for i:=1 to m do
begin
for j:=1 to h do write(c[i,j]:4);
writeln;
end;
end.