class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), sol = INT_MAX; 
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int l = i+1, r = n-1;
            int sum = 0,csum = 0;
            while(l<r){
                sum = nums[i]+nums[l]+nums[r];
                
                if(sum==target){
                    return target;
                }else{
                    if(abs(long(sum)-long(target))<abs(long(sol)-long(target))){
                        sol = sum;
                    }
                    if(sum<target){
                        l++;
                    }else{
                        r--;
                    }
                    while(l<r && l>1 && nums[l]==nums[l-1])l++;
                    while(r>l && r<n-1 && nums[r]==nums[r+1] ) r--;
                }
            }
        }
        return sol;
    }
};