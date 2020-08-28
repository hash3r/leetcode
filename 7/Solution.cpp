class Solution {
public:
    int reverse(int x) {
        int ax = abs(x);
        int res = 0;
        for(int last = ax%10; ax>0; ax=ax/10, last = ax%10) {
            int nextRes = res * 10 + last;
            if (res != (nextRes - last)/10) { //check for overflow
                return 0;
            }
            res = nextRes;
        }
        return x > 0 ? res:-res;
    }
};
