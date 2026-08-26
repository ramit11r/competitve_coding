class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int count=0;
        string ans="";
        for(j;j<n;j++){
            if(s[j]=='1'){
                count++;
            }
            if(i<=j && count==k){
                while(i<j && s[i]=='0'){
                    i++;
                }
                string curr=s.substr(i,j-i+1);
                if(ans==""||curr.size()<ans.size()||(curr.size()==ans.size()&&curr<ans)){
                    ans=curr;
                }
                if(s[i]=='1'){
                    count--;
                    i++;
                }
            }
        }
        return ans;
    }
};