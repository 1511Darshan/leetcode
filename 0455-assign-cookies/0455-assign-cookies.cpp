class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child = 0, cookie = 0;
        while(child < g.size() && cookie < s.size()){
            if(g[child] <= s[cookie]){
                child +=1;
            }
            cookie += 1;
        }
        return child;
    }
};