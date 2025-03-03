class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        vector<int> result(len1 + len2, 0);  // Initialize a vector to store the result.

        // Multiply each digit of num1 by each digit of num2
        for (int i = len1 - 1; i >= 0; --i) {
            for (int j = len2 - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');  // Multiply the digits.
                int sum = mul + result[i + j + 1];  // Add to the current position in the result.
                result[i + j + 1] = sum % 10;  // Store the unit place.
                result[i + j] += sum / 10;  // Carry over the tens place.
            }
        }

        // Convert the result vector into a string.
        string res = "";
        for (int num : result) {
            if (!(res.empty() && num == 0)) {  // Skip leading zeros.
                res += to_string(num);
            }
        }

        // If the result string is empty, return "0".
        return res.empty() ? "0" : res;
    }
};
