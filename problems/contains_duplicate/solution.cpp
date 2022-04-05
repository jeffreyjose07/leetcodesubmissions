class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>hset;
        for(auto it:nums){
            if(hset.find(it)!=hset.end()){
                return true;
            }
            hset.insert(it);
        }
        return false;
    }
};