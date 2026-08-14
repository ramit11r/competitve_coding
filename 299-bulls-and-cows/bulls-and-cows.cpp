class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0;
        int b=0;
        unordered_map<char,int> mp;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                a++;
            }
            else {
                mp[secret[i]]++;
            }
        }
        for(int i=0;i<guess.size();i++){
            if(secret[i]!=guess[i] && mp[guess[i]]>0){
                b++;
                mp[guess[i]]--;
            }
        }
        return(to_string(a)+'A'+to_string(b)+'B');
    }
};