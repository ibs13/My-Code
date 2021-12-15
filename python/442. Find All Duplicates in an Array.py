nums = [4,3,2,7,8,2,3,1]

result = []

len1 = len(nums)

nums.sort()

for x in range(0,len1-1):
    if nums[x]==nums[x+1]:
        result.append(nums[x])
        x+=1

        
print(result)
