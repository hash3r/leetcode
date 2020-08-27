class Solution {
public:
    int maxLen;
    int start;
    string longestPalindrome(string s) {
        if (s.size()<2) return s;
        for(int i=0;i<s.size()-1;i++) {
            extendPalindrom(s, i, i); //assume odd lenght, try to extend as long as possible
            extendPalindrom(s, i, i+1); //assume even lenght
        }
        return s.substr(start, maxLen);
    }

    void extendPalindrom(string str, int s, int e) {
        while(s>=0 && e<str.size() && str[s]==str[e]) {
            s--;
            e++;
        }
        if(maxLen<e-s-1) { //we have e+1 after prev increment
            start=s+1; //we have s-1 after prev decrement
            maxLen=e-s-1;
        }
    }

};
