class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> idx;
        for(int i = 0; i < words.size(); ++i ){
            for(char ch : words[i]){
                if(ch == x){
                    idx.push_back(i);
                    break;
                }
                
            }
        }
        return idx;
    }
};
