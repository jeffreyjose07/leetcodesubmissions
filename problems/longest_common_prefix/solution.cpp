class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int minimumLength = min(first.size(),last.size());
        for(int i=0;(i<minimumLength)&&(first[i]==last[i]);i++){
            result.push_back(first[i]);
        }
        return result;
    }
};