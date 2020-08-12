class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        vector<int> res;
        for (int i = 0; i<nums.size(); i++) {
            um[nums[i]] = i;
        }
        for (int i = 0; i<nums.size(); i++) {
            auto j = um.find(target - nums[i]);
            if (j != um.end() && j->second != i) {
                return {i, j->second};
            }
        }
        return res;
    }
};
