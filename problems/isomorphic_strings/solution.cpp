using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>replacementMap;
        unordered_map<char,char>reverseMap;
        for(int i = 0; i < s.length(); i++){
            if(replacementMap.find(s.at(i))!=replacementMap.end()){
                if(replacementMap[s.at(i)]!=t.at(i)){
                    return false;
                }
            }
            else{
                if(reverseMap.find(t.at(i))!=reverseMap.end()){
                    return false;
                }
                replacementMap[s.at(i)]=t.at(i);
                reverseMap[t.at(i)]=s.at(i);
            }
        }
        return true;
    }
};