class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string rows[numRows];
        
        for (int i = 0; i < numRows; i++) {
            rows[i] = "";
        }
        int rowNum = 0;
        bool goingUp = false;
        for (int i = 0; i < s.size(); i++) {
            rows[rowNum] += s[i];
            if (rowNum == numRows-1 && !goingUp || (rowNum == 0 && goingUp)) {
                goingUp = !goingUp;
            } 
            if (goingUp) {
                rowNum--;
            } else {
                rowNum++;
            }
        }
        string ret = "";
        for (auto r : rows) ret += r;
        return ret;
    }
};
