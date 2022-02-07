class Solution {
public:
    bool isPalindrome(int x) {
        long num = 0;
        long temp = 0;
        long y=x;
        while(x>0){
            temp = x%10;
            x/=10;
            num=num*10+temp;
        }
        if(y==num){
            return true;
        }
        return false;
    }
};