class Solution {
public:
    bool isNumberString(string number){
        if((number[0]=='-'&& isdigit(number[1]))||(isdigit(number[0]))){
            return true;
        }
        return false;
    }
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string op : operations){
            if(isNumberString(op)){
                st.push(stoi(op));
            }else if(op[0]=='C'){
                st.pop();
            }else if(op[0]=='D'){
                st.push(2*st.top());
            }else{
                int a = st.top();
                st.pop();
                int b = st.top();
                int c = a+b;
                st.push(a);
                st.push(c);
            }
        }
        int sol = 0;
        while(!st.empty()){
            sol+=st.top();
            st.pop();
        }
        return sol;
    }
};