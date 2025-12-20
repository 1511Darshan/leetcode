class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        //delete count
        int delete_c = 0;
        //count for rows
        int rows = strs.size();
        //count for col
        int cols = strs[0].size();
        //outer loop for col
        for(int j = 0; j<cols; j++){
            //inner loop for rows
            for(int i = 0; i< rows-1; i++){
                if(strs[i][j] > strs[i+1][j]){
                    delete_c++;
                    break;
                }
            }
        }
        return delete_c;

    }
};