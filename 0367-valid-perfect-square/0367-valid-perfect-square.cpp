class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n = num;

        for(long long i = 0; i*i <= num; i++) {
            if(i*i == num) {
                return true;
            }
        }
        return false;
    }
};