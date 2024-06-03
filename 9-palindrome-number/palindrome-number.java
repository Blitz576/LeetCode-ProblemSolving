class Solution {
    public boolean isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int y = 0;
        int tmp = x;

        while (x > 0) {
            y = y * 10 + x % 10; // Construct the reversed number
            x /= 10; // Remove the last digit from x
        }

        // Check if the original number and the reversed number are the same
        return y == tmp;
    }
}