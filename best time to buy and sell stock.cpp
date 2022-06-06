#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int min_val=prices[0];
    int max_val=0;
    int n=prices.size();
    for(int i=1;i<n;i++){
        max_val=max(max_val,prices[i]-min_val);
        min_val=min(min_val,prices[i]);
    }
 return max_val;
}
