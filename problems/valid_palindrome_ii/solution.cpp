class Solution {
public:
    bool isPalindrome(string s, int left, int right){
        while(left<right){
            if(s.at(left)!=s.at(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = s.size()-1;
        while(left<right){
            if(s.at(left)!=s.at(right)){
                bool removeLeft = isPalindrome(s,left+1,right);
                bool removeRight = isPalindrome(s,left,right-1);
                if(!removeLeft&&!removeRight){
                    return false;
                }
                return true;
            }
            left++;
            right--;
        }
        return true;
    }
};