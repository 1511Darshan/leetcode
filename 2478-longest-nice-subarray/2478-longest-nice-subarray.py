class Solution:
    def longestNiceSubarray(self, nums1: List[int]) -> int:
        left, right = 0, len(nums1)
        result = (

        )
        while left <= right:
            length = left + (right - left) // 2
            if self._can_form_nice_subarray(length, nums1):
                result = length
                left = length + 1
            else:
                right = length - 1

        return result

    def _can_form_nice_subarray(slef, length : int, nums1 : list[int]) -> bool:
        if length <= 1:
            return True
        for start in range(len(nums1) - length + 1):
            bit_mask = 0 
            is_nice = True
            for pos in range(start, start + length):
                if bit_mask & nums1[pos] != 0:
                    is_nice = False
                    break
                bit_mask |= nums1[pos]

            if is_nice:
                return True