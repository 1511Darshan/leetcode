class Solution {
public:
    string reversePrefix(string word, char ch) {
        int chi = word.find(ch);
        reverse(word.begin(),word.begin() + chi + 1);
        return word;

    }
};