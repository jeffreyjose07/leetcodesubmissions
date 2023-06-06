using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int p = 0;
        for(int i  = 0; i< nums.size(); i++){
            if(nums[i]!=val){
                k++;
                nums[p++]=nums[i];
            }
        }
        return k;
    }
};