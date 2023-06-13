class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sol;
        int word1Size = word1.size(), word2Size = word2.size();
        int a = 0,b=0;
        while(a<word1Size && b<word2Size){
            sol.push_back(word1[a++]);
            sol.push_back(word2[b++]);
        } 
        while(a<word1Size){
            sol.push_back(word1[a++]);
        }
        while(b<word2Size){
            sol.push_back(word2[b++]);
        }
        return sol;
    }
};