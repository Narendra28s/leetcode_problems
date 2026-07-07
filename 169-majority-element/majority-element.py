class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq=0
        ans=0
        for i in range(len(nums)):
            if freq == 0:
                ans = nums[i]
            if ans == nums[i]:
                freq +=1
            else:
                freq-=1
        count = 0
        for i in range(len(nums)):
            if nums[i]==ans:
                count+=1
        if count> len(nums)/2:
            return ans
        else:
            return -1            




        