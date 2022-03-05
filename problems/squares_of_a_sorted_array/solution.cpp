class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        vector<int> sol(nums.size());
        int pointer = nums.size()-1;
        while(l<=r){
            if(abs(nums[l])>=abs(nums[r])){
                sol[pointer--] = nums[l]*nums[l];
                l++;
            }else{
                sol[pointer--] = nums[r]*nums[r];
                r--;
            }
        }
        return sol;
    }
};