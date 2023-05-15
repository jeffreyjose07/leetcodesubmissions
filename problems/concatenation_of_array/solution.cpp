class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sol;
        int size = nums.size();
        int sizeSol = nums.size()*2;
        for(int i = 0;i<sizeSol;i++){
            sol.push_back(nums[i%size]);
        }
        return sol;
    }
};