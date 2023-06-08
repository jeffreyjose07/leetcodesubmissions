class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>countMap;
        for(int i =0; i<nums.size();i++){
            countMap[nums[i]]++;
        }
        int max = 0,sol = 0;
        for(auto it = countMap.begin(); it!=countMap.end(); it++){
            if(it->second > max){
                sol = it->first;
                max = it->second;
            }
        }
        return sol;
    }
};