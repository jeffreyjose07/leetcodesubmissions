class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char>hmap;
        hmap['(']=')';
        hmap['{']='}';
        hmap['[']=']';
    
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(hmap[s.at(i)]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(st.top()==s.at(i)){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};