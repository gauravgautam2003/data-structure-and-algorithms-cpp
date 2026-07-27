class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        if(n == -1) return false;
        for(int i = 0; i <= 19; i++){
            int ans = pow(3, i);
            if(ans == n){
                return true;
            }
        }
        return false;
    }
};