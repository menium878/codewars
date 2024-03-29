#include <vector>
#include <unordered_map>
std::vector<int> twoSum(std::vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target)
                return {nums[i], nums[j]};
        }
    }
    return {0, 0};
}

std::vector<int> twoSum(std::vector<int> &nums, int target) {

    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {0, 0};
}