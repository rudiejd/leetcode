class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pars = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };
        unordered_map<char, char> parsRev = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> stk;
        
        for (char c : s) {
            if (pars.find(c) != pars.end()) {
                stk.push(c);
            } else if (!stk.empty() && stk.top() == parsRev[c]) {
                stk.pop();
            } else {
                return false;
            }
        }
        
        return stk.empty();
    }
};