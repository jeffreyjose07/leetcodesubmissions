class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        vector<int>sol;
        while(l<r){
            if(numbers[l]+numbers[r]>target){
                r--;
            }
            else if(numbers[l]+numbers[r]<target){
                l++;
            }
            else{
                sol.push_back(l+1);
                sol.push_back(r+1);
                return sol;
            }
        }
        return sol;
    }
};