class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=sqrt(c);
        vector<int> a;
        for(int i=0;i<=n;i++){
            a.push_back(i);
        }
        int i=0,j=n;
        while(i<=j){
            if((pow(a[i],2)+pow(a[j],2))<c){
                i++;
            }
            else if(pow(a[i],2)+pow(a[j],2)==c){
                return true;
            }
            else{
                j--;
            }
        }
        return false;
    }
};