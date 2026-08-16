class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> a;
        string ans;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(a.empty() || a.top()!=s[i]){
                a.push(s[i]);
            }
            else if(a.top()==s[i]){
                a.pop();
            }
        }
        while(!a.empty()){
            ans=ans+a.top();
            a.pop();
        }
        return ans;
    }
};