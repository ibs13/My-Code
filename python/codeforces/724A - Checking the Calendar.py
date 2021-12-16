s1 = input();
s2 = input();

weekDay = {
	"monday" : 0,
	"tuesday" : 1,
	"wednesday" : 2,
	"thursday" : 3,
	"friday" : 4,
	"saturday" : 5,
	"sunday" : 6
}

n = weekDay[s1];
m = weekDay[s2];

p = (n+2)%7;
q = (n+3)%7
r = n;

if p==m or q==m or r==m:
	print("YES")
else:
	print("NO")
