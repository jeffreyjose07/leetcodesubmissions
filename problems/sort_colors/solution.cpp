class Solution {
public:
    void sortColors(vector<int>& nums) {
        int pointer1 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                int temp = nums[pointer1];
                nums[pointer1]=nums[i];
                nums[i]=temp;
                pointer1++;
            }
        }
        for(int i = pointer1; i <nums.size();i++){
            if(nums[i]==1){
                int temp = nums[pointer1];
                nums[pointer1]=nums[i];
                nums[i]=temp;
                pointer1++;
            }
        }
        for(int i = pointer1; i <nums.size();i++){
            if(nums[i]==2){
                int temp = nums[pointer1];
                nums[pointer1]=nums[i];
                nums[i]=temp;
                pointer1++;
            }
        }
    }
};