class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1) return s;
        vector<string> strs(numRows, "");

        for(int i=0, step=1, row=0; i<s.size();i++) {
            strs[row].push_back(s[i]);

            if (row==0)
                step=1;
            else if (row == numRows-1)
                step=-1;

            row+=step;
        }
        s.clear();
        for(auto str:strs) {
            s+=str;
        }
        return s;
    }
};
