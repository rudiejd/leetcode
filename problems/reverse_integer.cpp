class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int ret;
        bool negative = s[0] == '-';
        if (negative) {
            ::reverse(s.begin()+1, s.end());
        } else{
              ::reverse(s.begin(), s.end());
        }
        try {
            ret = stoi(s);  
        } catch(::out_of_range &e) {
            ret = 0;
        }
        return ret;
    }
};
