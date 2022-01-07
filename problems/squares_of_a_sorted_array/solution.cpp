class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        vector<int> sortednums;
        while(start<=end){
            int a = nums[start]*nums[start];
            int b = nums[end]*nums[end];
            if(a>b){
                sortednums.push_back(a);
                start++;
            }
            else if(b>a){
                sortednums.push_back(b);
                end--;
            }
            else{
                sortednums.push_back(a);
                if(start!=end)
                    sortednums.push_back(b);
                start++;
                end--;
            }
        }
        reverse(sortednums.begin(),sortednums.end());
        return  sortednums;
    }
};