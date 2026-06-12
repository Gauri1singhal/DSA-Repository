class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int pro=0;
        // for(int i=0; i<prices.size(); i++){
        //     for(int j=i+1; j<prices.size(); j++){
        //         int diff= prices[j]-prices[i];
        //         pro = max(pro, diff);
        //     }
        // }
        // return pro;

        int mini= prices[0];
        int pro=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            else{
                pro= max(pro, prices[i]-mini);
            }
        }
        return pro;
    }
};