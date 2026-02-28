class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        l = len(digits)-1
        for i in range(l,-1,-1):
            sum = digits[i]+1
            if sum>9:
                digits[i]=0
            else:
                digits[i]=sum
                break
        if digits[0] == 0:
            digits = [1] + digits

        return digits
            