class Solution {
public:
    int fib(int n) {
        if (n < 2) {
            return n;
        }
        int f1 = 1;
        int f2 = 1; 
        for (int i = 2; i < n; i++) {
            int fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return f2;
    }
}; 
