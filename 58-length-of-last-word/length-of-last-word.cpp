class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length()-1;
        int ans=0;
        while(len>=1 && s[len]==' '){
            len--;
            if(s[len]!=' '){
                break;
            }
        }
        for(int i=len;i>=0;i--){
            if(s[i]!=' '){
                ans=ans+1;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};