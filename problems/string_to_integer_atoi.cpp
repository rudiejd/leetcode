class Solution {
public:
    int myAtoi(string s) {
        string noSpace;
        istringstream iss(s);
        iss >> noSpace;
        bool negative = noSpace[0] == '-';
        if (negative || noSpace[0] == '+') {
            noSpace = noSpace.substr(1);
        }
        for (int i = 0; i < noSpace.size(); i++) {
            if (!::isdigit(noSpace[i])) {
                noSpace = noSpace.substr(0, i);
                break;
            }
        }
        int tens = noSpace.size()-1;
        int result = 0;
        for (int i = 0; i < noSpace.size(); i++) {
            if (tens > log10(INT_MAX) && noSpace[i] != '0') {
                return negative ? INT_MIN : INT_MAX; 
            }
            if (noSpace[i] == '0'){
                tens--;
                continue;
            } 
            auto toAdd = (unsigned long long)pow(10, tens) * (noSpace[i] - '0');
            if (toAdd + result > INT_MAX) {
                return negative ? INT_MIN : INT_MAX;
            } 
            result += toAdd;
            tens--;
        }
        return negative ? -1*result : result;
    }
};
