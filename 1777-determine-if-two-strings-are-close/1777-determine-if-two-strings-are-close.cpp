#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false; // If they have different lengths, they can't be close
        }

        // Check if they have the same set of unique characters
        unordered_map<char, int> freq1, freq2;
        for (char c : word1) {
            freq1[c]++;
        }
        for (char c : word2) {
            freq2[c]++;
        }

        // Check if they have the same set of characters
        if (freq1.size() != freq2.size()) {
            return false; // If the sets of unique characters are different, return false
        }

        // Check if the unique characters match
        for (auto& [key, _] : freq1) {
            if (freq2.find(key) == freq2.end()) {
                return false;
            }
        }

        // Check if the frequency distributions are the same
        vector<int> freqCount1, freqCount2;
        for (auto& [key, value] : freq1) {
            freqCount1.push_back(value);
        }
        for (auto& [key, value] : freq2) {
            freqCount2.push_back(value);
        }

        // Sort the frequency counts and compare
        sort(freqCount1.begin(), freqCount1.end());
        sort(freqCount2.begin(), freqCount2.end());

        return freqCount1 == freqCount2; // If sorted frequencies match, return true
    }
};
