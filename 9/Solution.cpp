class Solution {
public:
    bool isPalindrome(int x) {
        int ax = abs(x);
        int res = 0;
        for(int last = ax%10; ax>0; ax=ax/10, last = ax%10) {
            int nextRes = res * 10 + last;
            if (res != (nextRes - last)/10) {
                return 0;
            }
            res = nextRes;
        }

        return (x - res) == 0;
    }
};
