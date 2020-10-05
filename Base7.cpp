class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        bool isNegative = false;
        string result;
        if(num < 0){
            isNegative = true;
        }
        num = abs(num);
        while(num){
            int digit = num%7;
            num /= 7;
            result = to_string(digit) + result;
        }
        return isNegative ? "-"+result : result;
    }
};
