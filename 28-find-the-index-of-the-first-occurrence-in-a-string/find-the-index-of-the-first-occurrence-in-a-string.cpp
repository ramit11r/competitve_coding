class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int ans=0;
        while(j<needle.size() && i<haystack.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==needle.size()){
                    return ans;
                }
            }
            else{
                ans++;
                j=0;
                i=ans;
            }
        }
        return -1;
    }
};