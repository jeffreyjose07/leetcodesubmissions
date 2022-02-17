class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>sol;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<3){
            return {};
        }
        if(nums[0]>0){
            return {};
        }
        for(int i = 0; i<n; i++){
            if(nums[i]>0){
                break;
            }
            int l = i+1, r = n-1,sum = 0;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(l<r){
                int sum  = nums[i]+nums[l]+nums[r];
                if(sum<0){
                    l++;
                }else if(sum>0){
                    r--;
                }else{
                    sol.push_back({nums[i],nums[l],nums[r]});
                    int left = nums[l], right = nums[r];
                    while(l<r && nums[l]==left)
                        l++;
                    while(l<r && nums[r]==right)
                        r--;
                }
            }
        }
        return sol;
    }
};