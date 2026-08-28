class Solution {
public:
    int maxProduct(int n) {
        map<int,int> mp;
        while(n>0){
            int digit=n%10;
            mp[digit]++;
            n=n/10;
        }
        auto it=mp.rbegin();
        int a=it->first;
        if(it->second > 1){
            return a*a;
        }
        else{
            it++;
            return a*it->first;
        }
        return 0;
    }
};