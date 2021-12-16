s = input();

n = len(s);

t = 0;

if s[0]=='0' or s[0]=='4' or s[0]=='8' :
    t+=1;


for x in range(1,n) :
    if s[x]=='0' or s[x]=='4' or s[x]=='8' :
        t+=1;

    m = ((ord(s[x-1]))-48)*10 + (ord(s[x]))-48;

    if m%4==0 :
        t+=x;

print(t);
        
