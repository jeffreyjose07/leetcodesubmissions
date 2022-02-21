class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hmap;
        int n = nums.size();
        int sol;
        for(int num :nums){
            hmap[num]++;
        }
        for(auto h:hmap){
            if(h.second>(n/2)){
                return h.first;
            }
        }
        return -1;
    }
};