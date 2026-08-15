class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size(),0);
        if(k==0) return ans;
        int a;
        if(k>0){
            for(int i=0;i<code.size();i++){
                int n=k;
                a=0;
                int j=i;
                while(n>0){
                    if((j+n)>=code.size()) {
                        int b=(j+n)-code.size();
                        a=a+code[b];
                        n--;
                    }
                    else{
                        a=a+code[j+n];
                        n--;
                    }
                }
                ans[i]=a;
            }
        }
        else{
            for(int i=0;i<code.size();i++){
                int n=k;
                a=0;
                int c=1;
                int j=i;
                while(n<0){
                    if((j+n)<0) {
                        int b=code.size()-c;
                        a=a+code[b];
                        c++;
                        n++;
                    }
                    else{
                        a=a+code[j+n];
                        n++;
                    }
                }
                ans[i]=a;
            }
        }
        return ans;
    }
};