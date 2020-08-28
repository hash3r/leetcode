class Solution {
public:
    int myAtoi(string str) {
        long long res=0;
        int sign=1;
        int i=0;
        for(;i<str.size();i++) {
            if (str[i]!=' ') break;
        }
        if (str[i]=='-') {
            sign=-1;
            i++;
        } else if (str[i]=='+') {
            i++;
        }
        for(;i<str.size();i++) {
            auto c=str[i];
            if (0<=c-'0' && c-'9'<=9) {
                res=res*10 + (c-'0');
                if (res*sign >= INT_MAX) return INT_MAX;
                if (res*sign <= INT_MIN) return INT_MIN;
            } else {
                break;
            }
        }
        return res*sign;
    }
};
