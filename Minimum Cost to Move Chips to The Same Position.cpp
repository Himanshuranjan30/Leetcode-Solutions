class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        map<int,int> a;
        for(int i=0;i<position.size();i++)
        {
            a[position[i]]++;
        }
        int max=INT_MIN;
        int max2=INT_MIN;
        int nmax;
        
        int count=0;
        
        for(auto x:a)
        {
            int temp=x.first;
            for(auto s:a)
            {
                if(s.first!=temp&&abs(s.first-temp)%2==0)
                    count++;
            }
            if(count>max)
            {max=count;
             nmax=temp;
            }
            count=0;
            
        }
        int score=0;
        if(max==0)
        {
            for(auto x:a)
                if(x.second>max)
                {max=x.second;
                 nmax=x.first;
                }
        }
        cout<<nmax;
        for(auto c:a)
        {
           if(c.first!=nmax&&abs(nmax-c.first)%2!=0)
                 score=score+1*c.second;
        }
        
        return score;
            
    }
};
