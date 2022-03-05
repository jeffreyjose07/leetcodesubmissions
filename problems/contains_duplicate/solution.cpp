class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hmap;
        for(int i = 0; i< nums.size();i++){
            hmap[nums[i]]++;
        }
        for(auto it:hmap){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};