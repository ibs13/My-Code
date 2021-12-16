a = int(input())
b = int(input())
c = int(input())

p = 0
q = 0
r = 0
i = 1

while i<=a:

    if i*2<=b and i*4<=c:
        p = i
        q = i*2
        r = i*4
    else:
        break
    i+=1

print(p+q+r)
