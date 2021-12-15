class Solution:
    def isPalindrome(self, x: int) -> bool:
        clone = x

        number = 0

        if(clone<0):
            return 0

        while x!=0:
            t = x%10
            x = (int)(x/10)
            number = (number*10)+t

        if number==clone:
            return 1
        else:
            return 0
