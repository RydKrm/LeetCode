class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pos=0,prof=0;
        for(int i=1;i<prices.size();i++){
           if(prices[pos]<prices[i]){
               int now = prices[i]-prices[pos];
               prof = max(prof,now);
           }else {
               pos = i;
           }
        }
        return prof;
    }
};