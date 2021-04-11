class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.size() == 1) return 1;
        else if (s.size() == 0) return 0;
        int maxLen = 0;
        int i = 0, j = 0;
        unordered_set<char> seen;
        while(i < s.size()) {
                
            while(seen.find(s[i]) != seen.end()) {
                seen.erase(s[j]);
                j++;

            }
            seen.insert(s[i]);
            maxLen = max(i - j + 1, maxLen);
            i++;
            
        }
        
        
        return maxLen;
    }
};
