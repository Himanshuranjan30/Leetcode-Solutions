class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> ret(A.size(),false);
        int cur = 0;
        for(int i=0;i<A.size();++i) if(!((cur = cur*2+A[i]) %= 5)) ret[i] = true;
        return ret;
    }
};
