class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size()<t.size()) return "";
        if(s==t) return s;

        int n=t.size();
        unordered_map<char,int> mp;

        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }

        int right=0;
        int left=0;
        int start;
        int window=INT_MAX;

        for(right;right<s.size();right++){
            if(mp[s[right]]>0){
                n--;
            }
            mp[s[right]]--;
            while(n==0){
                if(right-left+1 < window){
                    window = right-left+1;
                    start = left;
                }
                if(mp.find(s[left])!=mp.end()){
                    mp[s[left]]++;
                    if(mp[s[left]]>0){
                        n++;
                    }
                }
                left++;
            }
        }

        if(window==INT_MAX) return "";
        int end=start+window-1;
        string ans="";

        for(start;start<=end;start++){
            ans+=s[start];
        }

        return ans;
    }
};