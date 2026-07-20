#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
int mini = prices[0];//minimum element
int profit = 0;
for(int i = 0; i < prices.size(); i++){
    int cost = prices[i] - mini;
    profit = max(profit, cost);
    mini = min(mini, prices[i]);
}
return profit;
}//TC = O(N), SC = O(1)