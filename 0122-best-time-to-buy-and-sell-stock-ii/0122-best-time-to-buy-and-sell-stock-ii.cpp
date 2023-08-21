class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0,pos=0;
        for(int i=1;i<prices.size();i++){
         if(prices[pos]>prices[i]){
             pos = i;
         }else {
             int cur = prices[i]-prices[pos];
             prof += cur;
             pos = i;
         }
        }
        return prof;
    }
};