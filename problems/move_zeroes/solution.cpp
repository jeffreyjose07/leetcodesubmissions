class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0, np = 0;
        while(np<nums.size()){
            if(nums[np]!=0){
                nums[p++]=nums[np];
            }
            np++;
        }
        while(p<nums.size()){
            nums[p++]=0;
        }
    }
};