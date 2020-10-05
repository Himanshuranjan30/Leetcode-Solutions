#include<ctype.h>
class Solution {
public:
    int calPoints(vector<string>& ops) {
       int sum=0;
       
        vector<int> result;
        int i;
        for(i=0;i<ops.size();i++)
       {
        
        if(ops[i]=="C"){
            result.erase(result.begin()+result.size()-1);
            
            
        }
        else if(ops[i]=="D")
        {
            result.push_back(result[result.size()-1]*2);
        }
        else if(ops[i]=="+")
        {
            result.push_back(result[result.size()-1]+result[result.size()-2]);
        }
        else
        {
            int temp=stoi(ops[i]);
            result.push_back(temp);
        }
       }
        
        for(int x:result)
        {
            sum=sum+x;
        }
        return sum;
    }
};
