class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        length=len(nums)
        if (len(nums)==1):
            return 0
        if (nums[0]>nums[1]):
            return 0
        if (nums[length-1]>nums[length-2]):
            return length-1
        for i in range(1,length-1):
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1]):
                return i
        return 1