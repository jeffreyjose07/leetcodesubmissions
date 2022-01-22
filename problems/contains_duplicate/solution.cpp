class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hmap;
        for(int i=0; i<nums.size(); i++){
            if(hmap.find(nums[i])==hmap.end()){
                hmap[nums[i]]=1;
            }
            else{
                hmap[nums[i]]++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(hmap[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};