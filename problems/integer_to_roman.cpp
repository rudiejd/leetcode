class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        map<int, string> numerals = {{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
        map<int, string>::reverse_iterator rit;
        for (rit = numerals.rbegin();  rit != numerals.rend(); ++rit) {
            for (int i = 0; i < num/rit->first; ++i) {
                    res += rit->second;
            }
            
            num  %= rit->first; 
            if (num == 0) {
                break; 
            }
        }
        
        return res;
    }
};
