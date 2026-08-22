class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int a=n;
        while(a>0){
            int r=a%10;
            sum+=r;
            product=product*r;
            a=a/10;
        }
        return (n%(sum+product)==0);
    }
};