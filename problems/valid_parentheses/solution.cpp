class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        char ch;
        for(int i = 0; i< s.size(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }
                ch = st.top();
                if(s[i]==')' && ch!='('){
                    return false;
                }
                else if(s[i]=='}' && ch!='{'){
                    return false;
                }
                else if(s[i]==']' && ch!='['){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};