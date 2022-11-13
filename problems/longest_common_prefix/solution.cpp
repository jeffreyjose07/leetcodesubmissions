class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol;
        string firstString = strs[0];
        
        for(int j = 0; j < firstString.size(); j++){
            bool flag = true;
            for(int i = 1; i < strs.size();i++){
                if(strs[i].size()<j+1){
                    flag = false;
                    break;
                }
                if(firstString.at(j)!=strs[i].at(j)){
                    flag = false;
                    break;
                }
            }
            if(flag){
                sol.push_back(firstString.at(j));
            }else{
                break;
            }
        }
        return sol;
    }
};