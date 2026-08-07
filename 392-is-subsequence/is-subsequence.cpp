class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        int first=0, second=0;
        int count=0;
        while(first<s.size() && second<t.size()){
            if(s[first]==t[second]){ 
                count++;
                first++;
            }
            second++;
        }
        return (count==s.size());
    }
};