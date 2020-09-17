class Solution {
public:
    int maxArea(vector<int>& height) {
        //brute force O(n*n/2) Time Limit Exceeded
        // int maxArea=0, s=height.size();
        // for(int i=0;i<s;i++) {
        //     for(int j=i+1;j<s;j++) {
        //         maxArea=max(maxArea, (j-i)*min(height[i], height[j]));
        //     }
        // }
        // return maxArea;

        //O(n) time&space
        int i=0, j=height.size()-1, maxArea=0;
        while(i<j) {
            int h=min(height[i], height[j]);
            maxArea=max(maxArea, (j-i)*h);
            while(height[i]<=h && i<j) i++;
            while(height[j]<=h && i<j) j--;
        }
        return maxArea;
    }
};
