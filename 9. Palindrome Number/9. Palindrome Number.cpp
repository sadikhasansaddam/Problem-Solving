// leetcode style

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;

    else {
        long long int reversed_num = 0, original_num = x;

        while(x != 0) {
            reversed_num = (reversed_num * 10) + (x % 10);
            x = x / 10;
        }

        if(original_num == reversed_num)
            return true;
        else
            return false;
        }
    }
};
