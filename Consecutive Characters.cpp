class Solution {
public:
    int maxPower(string s) {
       int max=INT_MIN;
        for(int i=0;i<s.length();i++)
       {
           char temp=s[i];
            int j=i+1;
            int count=1;
            while(s[j]==temp&&j<s.length())
            {
                count++;
                j++;
            }
            if(count>max)
                max=count;
       }
        return max;
    }
};
