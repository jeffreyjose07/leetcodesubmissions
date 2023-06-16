class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int index = abs(nums[i])-1;
            int valAtIndex = abs(nums[index]);
            nums[index] = -valAtIndex;
        }
        vector<int>sol;
        for(int i  = 0; i<nums.size(); i++){
            if(nums[i]>0){
                sol.push_back(i+1);
            }
        }
        return sol;
    }
};