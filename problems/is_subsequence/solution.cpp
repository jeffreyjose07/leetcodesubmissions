class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1 = s.size()-1;
        int p2 = t.size()-1;
        while(p1>=0 && p2>=0){
            if(s.at(p1)==t.at(p2)){
                p1--;
            }
            p2--;
        }
        if(p1==-1){
            return true;
        }
        return false;
    }
};