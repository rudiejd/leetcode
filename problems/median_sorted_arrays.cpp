#include<algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        merge(nums1, (int) nums1.size(), nums2, (int) nums2.size());
        if (nums1.size() == 1) return nums1[0];
        if (nums1.size() % 2 == 0) return ((double)nums1[(nums1.size() / 2 - 1)] + nums1[(nums1.size() / 2 )]) / 2;
        else return nums1[nums1.size() / 2];
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        size_t size1 = nums1.size() - m, size2 = nums2.size() - n;
        while(nums1.size() > size1 || nums2.size() > size2) {
            if ( nums2.size() == 0 && nums1.size() > 0 || (nums1.size() > size1 && nums2.size() > size2 && nums1[0] < nums2[0])) {
                res.push_back(nums1[0]);
                nums1.erase(nums1.begin());
            } else {
                res.push_back(nums2[0]);
                nums2.erase(nums2.begin());
            }
        }
         
        nums1 = res;
        
    }
}; 
