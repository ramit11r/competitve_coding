class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(char c:s){
            if(ans.empty() || ans.back()!=c){
                ans.push_back(c);
            }
            else if(ans.back()==c){
                ans.pop_back();
            }
        }
        return ans;
    }
};