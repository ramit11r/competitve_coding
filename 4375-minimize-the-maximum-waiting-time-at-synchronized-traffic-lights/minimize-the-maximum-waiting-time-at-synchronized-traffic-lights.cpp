class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int wt=0;
        int max_green=*max_element(lights.begin(),lights.end());
        for(int i=0;i<arrivalTime.size();i++){
            int r=arrivalTime[i]%period;
            if(r>=max_green){
                wt=max(wt,period-r);
            }
        }
        return wt;
    }
};