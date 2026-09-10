class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;
            }
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    count--;
                    st.pop();
                }
            }
            ans=max(ans,count);
           
        }
        return ans;
    }
};