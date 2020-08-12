class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int start = -1;
        int lmax = 0;
        for (int i = 0; i < s.size(); i++) {
            if (m.count(s[i])) {
                start = max(start, m[s[i]]);
            }
            m[s[i]] = i;
            lmax = max(lmax, i - start);
        }
        return lmax;
    }
};
