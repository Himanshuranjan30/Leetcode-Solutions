class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
     map<int,vector<int>> a;
        if(n==0)
            return {};
        if(n==1)
            return {0};
        map<int,int> result;
      vector<int> ans;
        for(int i=0;i<n;i++)
            result[i]=0;
        int min=INT_MAX;
        for(int i=0;i<edges.size();i++)
        {
            a[edges[i][0]].push_back(edges[i][1]);
            a[edges[i][1]].push_back(edges[i][0]);
        }
        for(auto s:a)
        {
            int x=s.first;
            vector<int> y=s.second;
            int m=1;
            for(int k=0;k<y.size();k++)
            {
                if(includes(y.begin(),y.end(),a[y[k]].begin(),a[y[k]].end()))
                     continue;
                else
                    result[x]++;
            }
            
        }
        queue<int> q;
        for(auto s:result)
            if(s.second==1)
                q.push(s.first);
        cout<<q.size();
         while(!q.empty())
        {
            ans.clear();// clear vector before we start traversing level by level.
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                int cur=q.front();
                q.pop();
                ans.push_back(cur);//adding nodes to vector.Goal is to get a vector of  just 1 or 2 nodes available.
                for(auto &neighbor:a[cur])
                {
                    result[neighbor]--;//removing current leave nodes
                    if(result[neighbor]==1)//adding current leave nodes
                        q.push(neighbor);
                }
            }
        }
            
        return ans;
    }
};
