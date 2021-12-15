class Solution:
    def climbStairs(self, n: int) -> int:

        u = 0
        v = 1

        for i in range(0,n):

            temp = v
            v = u+v
            u = temp

                
        return v
            
