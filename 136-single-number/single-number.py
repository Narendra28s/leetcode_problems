class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        l = len(nums)
        for num in nums:
            if nums.count(num) == 1:
                return(num)
        