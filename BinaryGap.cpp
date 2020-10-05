class Solution {
public:
    int binaryGap(int n) {
        string binary=std::bitset<1000>(n).to_string();
        cout<<binary<<endl;
        std::size_t pos=binary.find("1");
        binary=binary.substr(pos);
        cout<<binary;
        int gap=0;
        int i,j;
        for(i=0;i<binary.length();i++)
        {   for(j=i+1;j<binary.length();j++)
            {
                if(binary[i]=='1'&&binary[j]=='1')
                {
                 int diff=j-i;
                 cout<<diff;
                 if(diff>gap)
                     gap=diff;
                 break;
                }
            }
        }
        return gap;
    }
};
