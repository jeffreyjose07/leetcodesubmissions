class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hmap;
        vector<int>sol(2);
        for(int i = 0; i<nums.size(); i++){
            if(hmap.find(target-nums[i])!=hmap.end()){
                sol[0]=hmap[target-nums[i]];
                sol[1]=i;
                break;
            }
            else{
                hmap[nums[i]]=i;
            }
        }
        return sol;
    }
};