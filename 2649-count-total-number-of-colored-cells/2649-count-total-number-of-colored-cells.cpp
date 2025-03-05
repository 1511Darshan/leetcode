class Solution {
public:
    long long coloredCells(int n) {
        long long blue = 1;
        int a = 4;
        while(--n){
            blue += a;
            a += 4;
        }
        return blue;
    }
};