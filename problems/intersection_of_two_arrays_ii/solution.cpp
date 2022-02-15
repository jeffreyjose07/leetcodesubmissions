class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>hmap1;
        unordered_map<int,int>hmap2;
        vector<int>sol;
        for(int num: nums1){
            hmap1[num]++;
        }
        for(int num: nums2){
            hmap2[num]++;
        }
        for(auto num: hmap1){
            if(hmap1.find(num.first)!=hmap1.end() && hmap2.find(num.first)!=hmap2.end()){
                int nums1count = hmap1[num.first];
                int nums2count = hmap2[num.first];
                int i = min(nums1count,nums2count);
                for(;i>0;i--){
                    sol.push_back(num.first);
                }
            }
        }
        return sol;
    }
};