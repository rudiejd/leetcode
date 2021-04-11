class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = -1;
        int i = 0;
        int j = height.size()-1;
        
        while (i < j) {
            auto area = min(height[i], height[j])*(j-i);
            if (area > max) {
                max = area;
            } else if (height[j] > height[i]) {
                i++;
            } else {
                j--;
            }
        }
        
        /*for (auto i = 0; i < height.size(); i++) {
            for (auto j = 0; j < height.size(); j++) {
                if (min(height[i], height[j]) * (j-i) > max) {
                    max = min(height[i], height[j]) * (j-i);
                }
            }
        }*/
        
        
        
        return max; 
        
    }
}; 
