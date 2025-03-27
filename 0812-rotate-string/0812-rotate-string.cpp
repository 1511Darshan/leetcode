class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string doublel = s+s;
        return doublel.find(goal) < doublel.length();

    }
};