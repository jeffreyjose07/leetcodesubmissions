class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>charMap;
        charMap['[']=']';
        charMap['{']='}';
        charMap['(']=')';
        stack<char>st;
        for(auto it: s){
            if(it=='('||it=='{'||it=='['){
                st.push(charMap[it]);
            }else{
                if(!st.empty() && st.top()==it){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(!st.empty())
            return false;
        return true;
    }
};