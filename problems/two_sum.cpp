class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> vals;
        for (int i = 0; i < nums.size(); i++) {
            vals[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            auto goal = target - nums[i];
            if (vals.find(goal) != vals.end() && vals[goal] != i) {
                return {i, vals[target-nums[i]]};
            }
        }
        
        return {-1, -1}; 
    }
}; 
