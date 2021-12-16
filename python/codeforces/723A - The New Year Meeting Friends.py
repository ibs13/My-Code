a , b, c = input().split()

a = int(a);

b = int(b);

c = int(c);

d = []

d.append(a);
d.append(b);
d.append(c);

d.sort();

s = 0;

s+=(d[1]-d[0]);
s+=(d[2]-d[1]);

print(s);