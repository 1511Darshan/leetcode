class Solution {
public:
    int myAtoi(string s) {
        int n = 1;
        long long num = 0;
        int i = 0;
        int len = s.size();
        while(i < len && s[i] == ' '){
            i++;
        }
        if (i < len && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-'){
                n = -1;
            }
            i++;
        }
        while(i < len && isdigit(s[i])){
           int val = s[i] - '0';
           num = num * 10 + val;
           if(num * n > INT_MAX){
            return INT_MAX;
           }if(num *n < INT_MIN){
            return INT_MIN;
           }
           i++; 
        }
        return (int)(num * n);
    }
};