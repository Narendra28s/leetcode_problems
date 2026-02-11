class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = last = -1

        if not nums:
            return [-1, -1]

        st=0
        end = len(nums) - 1
        while st <= end:
            mid = (st + end) // 2
            if nums[mid] < target:
                st = mid + 1
            elif nums[mid] > target:
                end = mid - 1
            else:
                first = mid
                end = mid - 1

        st, end = 0, len(nums) - 1
        while st <= end:
            mid = (st + end) // 2
            if nums[mid] < target:
                st = mid + 1
            elif nums[mid] > target:
                end = mid - 1
            else:
                last = mid
                st = mid + 1

        return [first, last]
