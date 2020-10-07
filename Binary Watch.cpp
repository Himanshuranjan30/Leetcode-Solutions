class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for(int i=0;i<=11;i++)
        {
            for(int j=0;j<=59;j++)
            {
                int x=count(i);
                int y=count(j);
                if(x+y==num)
                {
                    string temp="";
                    temp=temp+to_string(i);
                    if(j<10)
                        temp=temp+':'+'0'+to_string(j);
                    else
                        temp=temp+':'+to_string(j);
                    
                    ans.push_back(temp);
                }
                
            }
        }
        return ans;
        
    }
    int count(int x)
    {
        string binary=std::bitset<32>(x).to_string();
        int c=std::count(binary.begin(),binary.end(),'1');
        return c;
    }
};
