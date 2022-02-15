class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r= nums.size()-1, mid, sol=INT_MAX;
        while(l<=r){
            mid = (l+r)/2;        
            if(nums[mid]<=nums[r]){
                sol = min(sol,nums[mid]);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return sol;
    }
};