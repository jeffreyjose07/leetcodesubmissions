class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashMap[26]={0};
        for(int i = 0; i<s.size(); i++){
            int loc = s.at(i)-'a';
            hashMap[loc]++;
        }
        for(int i = 0; i<t.size(); i++){
            int loc = t.at(i)-'a';
            hashMap[loc]--;
        }
        for(int i=0; i<26;i++ ){
            if(hashMap[i]!=0){
                return false;
            }
        }
        return true;
    }
};