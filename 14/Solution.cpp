class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) return "";
        sort(strs.begin(), strs.end());
        int i = 0;
        int n = strs.size();
        for (; i < strs[0].size() && strs[0][i] == strs[n-1][i]; i++) {}
        return strs[0].substr(0,i);
    }
};