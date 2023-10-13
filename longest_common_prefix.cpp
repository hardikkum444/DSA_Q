class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        for (int i = 0; i < strs[0].size(); ++i) {
            for (int j = 1; j < n; ++j) {
                if (strs[j].size() <= i || strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

https://leetcode.com/problems/longest-common-prefix/submissions/

//this is by far the most amazing solution i have seen
//i tried using my methods, but they just werent optimized enough, not 
//to mention the fact that i literally had to make an if statement for every considtion 
//and it still wasnt accepted

//the simplicity of this code amazes me!