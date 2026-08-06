class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=0;
        if(n<10){
            for(int i=n;i<10;i++){
                if(i%t==0) return i;
            }
        }
        else{
            for(int i=n;i<=100;i++){
                int num=i;
                int pro=1;
                int temp=i%10;
                num/=10;
                pro=temp*num;      
                if(pro%t==0) return i;  
            }
        }
        return 10;
    }
};