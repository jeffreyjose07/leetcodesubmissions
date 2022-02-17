class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> hset;
        for(int i = 0;i<arr.size();i++){
                hset[arr[i]]++;
        }
        for(int i = 0;i<arr.size();i++){
            if(arr[i]!=0){
                if(hset.find(2*arr[i])!=hset.end()){
                    return true;
                }  
            }else{
                if(hset[0]>1 &&hset[0]%2==0){
                    return true;
                }
            }
        }
        return false;
    }
};