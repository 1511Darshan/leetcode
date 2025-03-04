class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> prefixCommonArray(n);
        
        for (int currentIndex = 0; currentIndex < n; ++currentIndex) {
            int commonCount = 0;

            for (int i = 0; i <= currentIndex; ++i) {
                for (int j = 0; j <= currentIndex; ++j) {
                    if (A[i] == B[j]) {
                        ++commonCount;
                        break;
                    }
                }
            }
            prefixCommonArray[currentIndex] = commonCount;
        }
        return prefixCommonArray;
    }
};
