class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> r;
        for(int num : nums){
            r.push_back(num);
        }
        for(int num : nums){
            r.push_back(num);
        }
        return r;
    }
};