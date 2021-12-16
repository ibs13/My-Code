t = int(input());

n = [];

s = 0;
i=0;

a = [int(x) for x in input().split()];

min_ = a[0];
max_ = a[0];


for x in range(1,t):
    if(min_>a[x]):
        s+=1;
        min_=a[x];
    if(max_<a[x]):
        s+=1;
        max_=a[x];

print(s);
