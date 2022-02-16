class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int l=0,r=0;
        unordered_set<char> charSet;
        while(r<s.length()){
            if(charSet.find(s.at(r))==charSet.end()){
                charSet.insert(s.at(r++));
            }else{
                charSet.erase(s.at(l++));
            }
            maxLength = max(maxLength,r-l);
        }
        return maxLength;
    }
};