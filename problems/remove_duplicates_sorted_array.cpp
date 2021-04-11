class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums.size();
        }
        int last = nums[0];
        for (auto i = 1; i < nums.size(); i++) {
            while (nums[i] == last && nums.size() > i) {   
                nums.erase(nums.begin()+i);
                
            } 
            last = nums[i];

        }
        
        return nums.size();
        
    }
};
