class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> usedNumbers;

        while (true) {
            int sum = 0;

            // Find the sum of the squares of the digits
            while (n != 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            // If sum becomes 1, it's a happy number
            if (sum == 1)
                return true;

            // Update n
            n = sum;

            // If we've already seen this number, a cycle exists
            if (usedNumbers.count(n))
                return false;

            usedNumbers.insert(n);
        }
    }
};