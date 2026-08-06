class Solution {
public:
    int smallestNumber(int n, int t) {
        int current = n;
        while (true) {
            // Calculate the product of the digits of 'current'
            int temp = current;
            int product = 1;
            while (temp > 0) {
                product *= (temp % 10);
                temp /= 10;
            }
            
            // Check if the product is divisible by t
            if (product % t == 0) {
                return current;
            }
            
            current++;
        }
    }
};