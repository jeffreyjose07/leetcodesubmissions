class Solution {
public:
    
    void findCombinations(int index, int target, vector<int>&candidates, vector<vector<int>>& sol, vector<int>& ds ){
        if(index == candidates.size()){
            if(target==0){
                sol.push_back(ds);
            }
            return;
        }
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            findCombinations(index,target-candidates[index],candidates,sol,ds);
            ds.pop_back();
        }
        
        findCombinations(index+1,target,candidates,sol,ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>sol;
        vector<int>ds;
        findCombinations(0,target,candidates,sol,ds);
        return sol;
    }
};