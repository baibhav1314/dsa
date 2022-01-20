#include<bits/stdc++.h>

using namespace std;

//Using prefix min
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> pmin(n);
        
        pmin[0] = prices[0];
        for(int i=1;i<n;i++){
            pmin[i] = min(prices[i],pmin[i-1]);
        }
        
        int maxProfit = 0;
        for(int i = 1;i<n;i++){
            maxProfit = max(maxProfit,prices[i] - pmin[i-1]);
        }
        
        return maxProfit;
    }
};

//Just using a variable to store the min
class Solution1 {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 1;i<n;i++){
            maxProfit = max(maxProfit,prices[i] - minPrice);
            minPrice= min(minPrice,prices[i]);
        }
        
        return maxProfit;
    }
};