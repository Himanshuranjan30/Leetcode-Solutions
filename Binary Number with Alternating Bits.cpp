class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary=std::bitset<32>(n).to_string();
        std::size_t pos=binary.find("1");
        binary=binary.substr(pos);
        for(int i=0;i<binary.length()-1;i++)
        {
            if(binary[i]==binary[i+1])
                return false;
        }
        return true;
    }
};
