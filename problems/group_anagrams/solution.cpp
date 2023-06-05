using namespace std;
class Solution {
public:
    string getKey(string word){
        unordered_map<int,int>wordMap;
        for(int i = 0; i< word.size();i++){
            wordMap[word.at(i)-'a']++;
        }
        string key(26,'0');
        for(auto it = wordMap.begin(); it!=wordMap.end(); it++){
            key[it->first]=static_cast<char>(it->second);
        } 
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mapOfAnagrams;
        vector<vector<string>>sol;
        for(int i = 0; i < strs.size() ; i++){
            string key  = getKey(strs[i]);
            mapOfAnagrams[key].push_back(strs[i]);
        }
        for(auto it = mapOfAnagrams.begin();it!=mapOfAnagrams.end();it++){
            sol.push_back(it->second);
        }
        return sol;
    }
};