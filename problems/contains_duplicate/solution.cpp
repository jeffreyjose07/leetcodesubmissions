class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hmap;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(nums.at(i))==hmap.end()){
               hmap[nums.at(i)]=1; 
            }else{
               hmap[nums.at(i)]++;
            }
        }
        for(auto it=hmap.begin();it!=hmap.end();it++){
            if(it->second>1){
                return true;
            }
        }
        return false;
    }
};