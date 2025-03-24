class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int f = 0;
        int l = 0;
        sort(meetings.begin(),meetings.end());
        for(auto& x : meetings){
            int start = x[0], end = x[1];
            if(start > l + 1){
                f += start - l - 1;
            }
            l = max(l, end);
        }
        f += days - l;
        return f;

    }
};