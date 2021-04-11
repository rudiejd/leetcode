 class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        else if (strs.size() == 1) return strs[0];
        auto pref = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = strs[i].size();
            while (strs[i].substr(0, pref.size()) != pref) {
                pref = pref.substr(0, j);
                j--; 
                if (pref.empty()) {
                    return "";
                }
            }
        }
        return pref; 
    }
};
