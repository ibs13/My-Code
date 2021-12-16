n = int(input())
s = input()

y = list(s)

a = c = g = t = q = 0 

for x in s:
    if x=='A':
        a+=1
    elif x=='C':
        c+=1
    elif x=='G':
        g+=1
    elif x=='T':
        t+=1
    else:
        q+=1

m = max(a,c,g,t)

if m==0:
    m=1

sum = 0

sum+=(m-a)
sum+=(m-c)
sum+=(m-g)
sum+=(m-t)

if(sum>q):
    print("===")

else:
    x = 0
    while x<n :
        if y[x]=='?':
            if m!=a:
                y[x]='A'
                a+=1
            elif m!=c:
                y[x]='C'
                c+=1
            elif m!=g:
                y[x]='G'
                g+=1
            elif m!=t:
                y[x]='T'
                t+=1
            else:
                m+=1
                x-=1
        x+=1

    if a==g and g==c and c==t:
        p = "".join(y)
        print(p)
    else:
        print("===")
        

