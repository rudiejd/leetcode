class Solution {
public:
    int hammingWeight(uint32_t n) {
        string binary = std::bitset<32>(n).to_string();
        int cnt = 0;
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == '1') {
                cnt++;
            }
        }
        
        return cnt; 
    }
};
