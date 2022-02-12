class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word: words){
            bool isPalindrome = true;
            for(int i=0,j=word.length()-1;i<=j;i++,j--){
                if(word[i]!=word[j]){
                    isPalindrome = false;
                    break;
                }
            }
            if(isPalindrome){
                return word;
            }
        }
        return "";
    }
};