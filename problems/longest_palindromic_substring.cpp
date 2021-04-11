class Solution {
public:
   
    string longestPalindrome(string s) {
        int siz = s.size();
        if (siz <= 1) return s; 
        size_t maxLen = 1;
        string res = s.substr(0, 1);
        vector<vector<bool>> mem(siz, vector<bool>(siz));
        // find one char palindromes
        for (auto i = 0; i < siz; i++) {
            mem[i][i] = true;
        }
         // find two char palindromes
        for (auto i = 0; i < siz-1; i++) {
            if (s[i] == s[i+1]) {
                if (maxLen == 1) {
                    maxLen = 2;
                    res = s.substr(i, 2);
                }
                mem[i][i+1] = true;
            }
        }
        
                // find all others
        for (auto offset = 2; offset < siz; offset++) {
            for (auto i = 0; i < siz - offset; i++) {
                auto j = i + offset;
                if (mem[i+1][j-1] && s[i] == s[j]) {
                    mem[i][j] = true;
                    if (j-i+1 > maxLen) {
                       
                        maxLen = j-i+1;
                        res = s.substr(i, maxLen);
                    }
                }
            }
         }
   
        
             

        
        
        
       
        return res;
        
        
    }
    
};
