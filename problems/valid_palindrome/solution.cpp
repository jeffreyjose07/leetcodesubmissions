class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        while(l<=r){
            while(l<=r && !isalnum(s.at(l))){
                l++;
            }
            while(l<=r && !isalnum(s.at(r))){
                r--;
            }
            if((l<=r) && (s.at(l)!=s.at(r))){
                return false;
            }
            l++;
            r--;
        }
        return true;
        
    }
};