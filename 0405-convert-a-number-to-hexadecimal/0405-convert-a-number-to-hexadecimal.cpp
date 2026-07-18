class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        string hex_chars = "0123456789abcdef";
        string result = "";

        unsigned int n = num; 
        
        while (n > 0) {
            int rem = n % 16;                   
            result = hex_chars[rem] + result;     
            n = n / 16;                          
        }
        
        return result;
    }
};