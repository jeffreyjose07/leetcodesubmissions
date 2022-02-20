class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sol(nums.size());
        int l = 0, r = nums.size()-1;
        int p = nums.size()-1;
        while(l<=r){
            if(abs(nums[l])>=abs(nums[r])){
                sol[p--] = (nums[l]*nums[l]);
                l++;
            }else{
                sol[p--] = (nums[r]*nums[r]);
                r--;
            }
        }
        return sol;
    }
};