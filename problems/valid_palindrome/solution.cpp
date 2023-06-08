using namespace std;
class Solution {
public:
    string removeSpecialCharacters(string s){
        string result;
        for(char c : s){
            if(isalnum(c)){
                result += tolower(c);
            }
        }
        return result;
    }
    bool isPalindrome(string s) {
        string result = removeSpecialCharacters(s);
        int l = 0, r = result.length()-1;
        while(l<=r){
            if(result[l]!=result[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};