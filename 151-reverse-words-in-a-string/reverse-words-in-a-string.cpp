class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        string ans="";
        vector<string> word;
        while(ss>> words){
            word.push_back(words);
        }
        for(int i=word.size()-1;i>=0;i--){
            ans=ans+word[i];
            if (i != 0) {
                ans += " ";
            }
        }
        return ans;
    }
};