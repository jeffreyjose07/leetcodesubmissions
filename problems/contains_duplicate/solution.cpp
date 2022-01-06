class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        for(int i=0; i<nums.size(); i++ ){
            hashMap[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++ ){
            if(hashMap[nums[i]]>1)
                return true;
        }
        return false;
    }
};