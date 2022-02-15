class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r= nums.size()-1,mid,sol=-1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target){
                sol=mid;
                break;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return sol;
    }
};