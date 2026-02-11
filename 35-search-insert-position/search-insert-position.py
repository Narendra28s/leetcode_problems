class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n= len(nums)
        st, end = 0, n - 1
        while st <= end:
            mid = (st + end) // 2
            if target < nums[mid]:
                end = mid - 1
            elif target > nums[mid]:
                st = mid + 1
            else:
                st = mid
                break
        return(st)