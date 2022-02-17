class Solution {
public:
    vector<int> findAnagrams(string original, string check) {
        int m = original.size(), n= check.size();
    vector<int>sol;
    vector<int>ohmap(26,0);
    vector<int>chmap(26,0);
    if(m<n){
        return sol;
    }
    for(int j = 0; j < n; j++){
        chmap[check.at(j)-'a']++;
    }
    int i=0;
    for(;i<m;i++){
        if(i<n){
            ohmap[original.at(i)-'a']++;
        }else{
            if(ohmap==chmap){
                sol.push_back(i-n);
            }
            ohmap[original.at(i-n)-'a']--;
            ohmap[original.at(i)-'a']++;
        }
    }
    if(ohmap==chmap){
        sol.push_back(i-n);
    }
    return sol;
    }
};