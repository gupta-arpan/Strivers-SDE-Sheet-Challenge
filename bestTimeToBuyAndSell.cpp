#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int buy = prices[0];
    int maxProfit = 0;
    for(int i=1;i<n;i++){
        if(prices[i]>=buy){
            int profit = prices[i]-buy;
            maxProfit = max(maxProfit,profit);
        }
        else{
            buy=prices[i];
        }
    }
    return maxProfit;
}
