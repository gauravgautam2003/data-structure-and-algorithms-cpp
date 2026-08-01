class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n));
        int count = 0;

        int startingRow = 0;
        int startingCols = 0;
        int endingCols = n - 1;
        int endingRow = n - 1;

        while(startingRow <= endingCols && startingCols <= endingCols) {
            // left to right and row not change

            for(int i = startingCols; i <= endingCols; ++i) {
                ans[startingRow][i] = ++count;
            }

            // move top to down endingCols in endingRows

            for(int i = startingRow + 1; i <= endingRow; ++i) {
                ans[i][endingCols] = ++count;
            }

            // move right to left with endingRows in startingCols
            // move up
            if(startingRow < endingRow && startingCols < endingCols) {

                // move right to left

                for(int i = endingCols - 1; i > startingRow; --i) {
                    ans[endingRow][i] = ++count;
                }

                // move bottom to up

                for(int i = endingRow; i > startingRow; --i) {
                    ans[i][startingCols] = ++count;
                }
            }
            ++startingRow;
            --endingRow;
            ++startingCols;
            --endingCols;
        } 
        return ans;
    }
};