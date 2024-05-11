int maxSubArray(std::vector<int>& nums) {
int curr=0;
int amax=INT_MIN;
  if(nums.empty())return 0;
    for (auto k:nums) {
        curr=std::max(k,curr+k);
        amax=std::max(amax,curr);

    }
    return amax;
}
