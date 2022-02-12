class Solution {
public:
    int strStr(string haystack, string needle) {
        int needle_size = needle.length();
        int haystack_size = haystack.length();        
        if(needle_size<1){
            return 0;
        }
        for(int i = 0; i < haystack_size; i++ ){
            if(haystack[i]==needle[0]){
                int j;
                for( j=0;j<needle_size;j++){
                    if(haystack[i+j]!=needle[j]){
                        break;
                    }
                }
                if(j==needle_size){
                    return i;
                }
            }
        }
        return -1;
    }
};