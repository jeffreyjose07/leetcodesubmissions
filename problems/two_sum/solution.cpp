class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;
        vector<int> sol;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(target-nums[i])!=hmap.end()){
                sol.push_back(i);
                sol.push_back(hmap[target-nums[i]]);
                break;
            }
            else{
                hmap[nums[i]]=i;
            }
        }
        return sol;
    }
};