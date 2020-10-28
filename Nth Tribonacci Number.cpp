class Solution {
public:
    unordered_map<int, int> hashmap;
    int tribonacci(int n) 
    {
        if(hashmap.find(n) != hashmap.end())
            return hashmap[n];
        int output;
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        
        output = tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1) ;
        
        hashmap[n] = output;
        return output;  
    }
};
