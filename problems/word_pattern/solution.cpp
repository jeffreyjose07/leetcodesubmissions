class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        if(pattern.size()!=words.size()){
            return false;
        }

        unordered_map<char,string>charToWordMap;
        unordered_map<string,char>wordToCharMap;
        for(int i = 0; i<pattern.size(); i++){
            if(charToWordMap.find(pattern.at(i))!=charToWordMap.end() &&
            charToWordMap[pattern.at(i)]!=words[i]){
                return false;
            }
            if(wordToCharMap.find(words[i])!=wordToCharMap.end() &&
            wordToCharMap[words[i]]!=pattern.at(i)){
                return false;
            }
            if(charToWordMap.find(pattern.at(i))==charToWordMap.end() &&
            wordToCharMap.find(words[i])==wordToCharMap.end()){
                charToWordMap[pattern.at(i)]=words[i];
                wordToCharMap[words[i]]=pattern.at(i);
            }
        }
        return true;
    }
};