class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sortedNums(nums.size());
        int i=nums.size()-1;
        int j=0;
        for(int k=nums.size()-1;k>=0;k--){
            if(abs(nums[i])>abs(nums[j])){
                sortedNums[k]=nums[i]*nums[i];
                i--;
            }else{
                sortedNums[k]=nums[j]*nums[j];
                j++;
            }
        }
        return sortedNums;
    }
};