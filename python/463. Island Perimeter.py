grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]


length0 = len(grid)
length1 = len(grid[0])

total = 0;

for i in range(0, length0):
    for j in range(0, length1):
        if grid[i][j]==1:
            if i==0:
                total+=1
            if j==0:
                total+=1
            if i==length0-1:
                total+=1
            if j==length1-1:
                total+=1
            if i!=length0-1 and grid[i+1][j]==0:
                total+=1
            if j!=length1-1 and grid[i][j+1]==0:
                total+=1
            if i!=0 and grid[i-1][j]==0:
                total+=1
            if j!=0 and grid[i][j-1]==0:
                total+=1
                
            
                
print(total)
