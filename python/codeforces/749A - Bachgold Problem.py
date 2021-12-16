import math

n = int(input())

if n%2==0:
    m = int(n/2)
    print(m)
    for x in range(0,m):
        print(2,end="")
        if(x!=m-1):
            print(" ",end="")
    print()
    
elif n>2:
    n-=3

    m = int(n/2)

    print(m+1)
    for x in range(0,m):
        print(2,end="")
        
        print(" ",end="")

    print(3)


    
            
                
        
