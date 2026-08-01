class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> pairs(n);
        for(int i = 0; i < n; i++) {
            pairs[i] = {score[i], i};
        }

        sort(pairs.rbegin(), pairs.rend());

        vector<string> answer(n);

        for(int rank = 0; rank < n; rank++){
            int originalIndex = pairs[rank].second;

            if (rank == 0) {
                answer[originalIndex] = "Gold Medal";
            } else if (rank == 1) {
                answer[originalIndex] = "Silver Medal";
            } else if (rank == 2) {
                answer[originalIndex] = "Bronze Medal";
            } else {
                answer[originalIndex] = std::to_string(rank + 1);
            }
        }
        return answer;
    }
};