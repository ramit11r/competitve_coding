class Solution {
public:
    string intToRoman(int num) {
        string ans;
        vector<pair<int, string>> roman = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        int digit=to_string(num).length();
        while(num>0){
            for(auto p:roman ){
                if(num>=p.first){
                    ans.append(p.second);
                    num=num-p.first;
                    break;
                }
            }
        }
        return ans;
    }
};