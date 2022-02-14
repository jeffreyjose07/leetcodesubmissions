class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int current_sum = 0;
        for(int i = 0; i<nums.size();i++){
            current_sum+=nums[i];
            if(current_sum>max){
                max = current_sum;
            }
            if(current_sum<0){
                current_sum = 0;
            }
        }
        return max;
    }
};