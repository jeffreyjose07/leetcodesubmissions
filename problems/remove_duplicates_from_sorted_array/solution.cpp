class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int result = 0;
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
	        if (mpp.find(nums[i]) == mpp.end()) 
            {
		        nums[result] = nums[i];
		        result++;
		        mpp[nums[i]] = i;
	        }
        }   
        for (int i = nums.size()-1 ; i >=result; i--)
        {
	        nums.pop_back();
        }
        return result;
    }
};