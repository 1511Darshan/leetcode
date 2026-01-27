class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = 1
        can = nums[0]
        for i in range(1,len(nums)):
            if count == 0:
                can = nums[i]
                count = 1
            elif can == nums[i]:
                count += 1
            else:
                count -= 1
        return can
