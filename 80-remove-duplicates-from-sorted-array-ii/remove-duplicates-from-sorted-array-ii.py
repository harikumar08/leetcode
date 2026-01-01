class Solution(object):
    def removeDuplicates(self, nums):
        count,temp,i = 0, nums[0] , 0
        while i < len(nums):
            if nums[i]!=temp:
                temp = nums[i]
                count = 1
                i = i + 1

            elif nums[i]==temp and count<2:
                count = count + 1
                i += 1
            elif nums[i]==temp and count >=2:
                nums.pop(i)
                
        return len(nums)