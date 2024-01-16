#include <vector>
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for(int i=0;i<nums.size();i++){
        for(int j=1;j<nums.size();j++){
            if (nums[i]+nums[j]==target)
                return {nums[i],nums[j]};
        }
    }
    return {0,0};
}