class Solution {
public:
        bool buddyStrings(string A, string B) {
        int i;
       if(A.length()!=B.length())
           return false;
        vector<int> indices;
        set<char> c;
       if(A==B)
       {
        for(i=0;i<A.length();i++)
            c.insert(A[i]);
        if(c.size()<A.size())
            return true;
        else
            return false;
       }
        for(i=0;i<A.length();i++)
        {
            if(A[i]!=B[i])
                indices.push_back(i);
        }
        if(indices.size()==2&&A[indices[0]]==B[indices[1]]&&B[indices[0]]==A[indices[1]])
            return true;
        return false;
    }
};
