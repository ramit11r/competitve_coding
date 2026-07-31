class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        int val=0;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for(int i=0;i<=s.length();i++){
            if(i+1<s.length() && mp[s[i]]<mp[s[i+1]]){
                val=val-mp[s[i]];
            }
            else{
                val=val+mp[s[i]];
            }
        }
        return val;
    }
};