class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        int count=0;
        int num=n;
        while(num>=5){
            int d=num/5;
            count+=d;
            num=num/5;
        }
        return count;
    }
};