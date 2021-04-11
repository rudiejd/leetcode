class Solution {
public:
    bool isPalindrome(int x) {
        auto s = to_string(x);
        int j = s.size()-1;
        for (int i = 0; i < (s.size() / 2); i++) {
            if (s[j] != s[i]) {
                return false;
            }
            j--;
        }
        return true;
        
    }
};
