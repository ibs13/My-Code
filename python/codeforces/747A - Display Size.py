import math

n = int(input())

x = int(math.sqrt(n))

while n%x!=0 
    x-=1

y = int(n  x)

print(min(x,y),max(x,y))
