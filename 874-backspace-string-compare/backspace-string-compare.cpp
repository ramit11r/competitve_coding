class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1=s.size()-1;
        int n2=t.size()-1;
        while(n1>=0 || n2>=0){
            int skip1=0;
            while(n1>=0){
                if(s[n1]=='#'){
                    skip1++;
                    n1--;
                }
                else if(skip1>0){
                    skip1--;
                    n1--;
                }
                else{
                    break;
                }
            }
            int skip2=0;
            while(n2>=0){
                if(t[n2]=='#'){
                    skip2++;
                    n2--;
                }
                else if(skip2>0){
                    skip2--;
                    n2--;
                }
                else{
                    break;
                }
            }
            if(n1>=0 && n2>=0 && s[n1]!=t[n2]) return false;

            if((n1>=0) != (n2>=0)) return false;

            n1--;
            n2--;

        }
        return true;
    }
};