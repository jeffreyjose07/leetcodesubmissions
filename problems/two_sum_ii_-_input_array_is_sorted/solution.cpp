class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>sol;
    
        int l = 0, r = numbers.size()-1;
        
        while(l<r){
            int sum = numbers[l]+numbers[r];
            if(sum<target){
                l++;
            }else if(sum>target){
                r--;
            }else{
                sol.push_back(l+1);
                sol.push_back(r+1);
                break;
            }
        }
        return sol;
    }
};