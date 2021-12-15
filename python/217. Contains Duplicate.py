nums = [1,2,3,4]
length = len(nums)

nums.sort()

flag = 0

for x in range(0,length-1):
    if nums[x]==nums[x+1]:
        flag = 1
        break


if flag==1:
    print('true')
else:
    print('false')



