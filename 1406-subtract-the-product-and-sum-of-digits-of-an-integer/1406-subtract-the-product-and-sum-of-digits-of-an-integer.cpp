class Solution {
public:
    int subtractProductAndSum(int n) {
        string str = to_string(n);
        int num1 = 1, num2 = 0;
        for(int i = 0; i< str.size();++i){
            num1 *= str[i] - '0';
            num2 += str[i] - '0';
        }
        return num1 - num2;
    }
};