class Solution {
public:
    static bool isnotalnum(char c) {
        return isalnum(c) == 0;
    }
    bool isPalindrome(string s) {
        size_t siz = s.size();
        if (siz <= 1) return true;
        size_t i = 0, j = siz-1;
        while (i < j) {
            while (!isalnum(s[i]) && i < siz) i++;
            while (!isalnum(s[j]) && j > 0) j--;
            
            if (j > 0 && tolower(s[i++]) != tolower(s[j--])) return false;
        }
        return true;
    }
    
};
