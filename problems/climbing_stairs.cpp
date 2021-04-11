// just fibonacci
class Solution {
public:
    int climbStairs(int n) {
        int f0 = 1;
        int f1 = 1; 
        int fn;
        for (int i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        return f1; 
    }
}; 
