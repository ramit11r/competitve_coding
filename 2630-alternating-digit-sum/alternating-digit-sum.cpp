class Solution {
public:
    int alternateDigitSum(int n) {
        int num=n;
        int count=0;
        int ans=0;
        int rem;
        while(num>0){
            count++;
            num=num/10;
        }
        for(int i=count;i>0;i--){
            rem=n%10;
            if(i%2==0){
                ans=ans-rem;
            }
            else{
                ans=ans+rem;
            }
            n=n/10;
        }
        return ans;
    }
};