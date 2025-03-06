class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int missing = -1, repeat = -1;
        unordered_map<int, int> freq;

        // Count occurrences of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Find missing and repeated numbers
        for (int i = 1; i <= nums.size(); i++) {  // Loop up to n
            if (!freq.count(i)) {  
                missing = i;  // Number not found → missing
            } else if (freq[i] > 1) {  
                repeat = i;  // Number appears twice → repeat
            }
        }

        return {repeat, missing};  // ✅ Correct return type
    }
};
