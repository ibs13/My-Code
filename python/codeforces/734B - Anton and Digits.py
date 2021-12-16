a1,a2,a3,a4 = input().split()

a1 = int(a1)
a2 = int(a2)
a3 = int(a3)
a4 = int(a4)

q = 0
r = 0

if a3<a4:
	p = a3
else:
	p = a4

if p<a1:
	q = p
	a1-=p
	if a1>a2:
		r = a2
	else:
		r = a1;
else:
	q = a1
	
n = 256*q + 32*r

print(n)

