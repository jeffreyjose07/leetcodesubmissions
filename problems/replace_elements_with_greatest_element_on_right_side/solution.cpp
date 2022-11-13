class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>sol(arr.size(),-1);
        if(arr.size()<2){
            return sol;
        }
        int maximum = arr.at(arr.size()-1);
        for(int i = arr.size()-2;i>=0;i--){
            maximum=max(arr.at(i+1),maximum);
            sol[i]=maximum;
        }
        return sol;
    }
};