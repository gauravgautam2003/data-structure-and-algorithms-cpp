class Solution {
public:
    int countPrimes(int n) {

        // gieve of Eratosthenes algorithm
        int count = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i = 2; i < n; i++) {

            if(prime[i]) {
                count++;

                // i ke table mein aane walo mein zero daal do

                for(int j = 2*i; j < n; j = j + i) {
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
};