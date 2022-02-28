#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int pmax[n],smax[n];
        pmax[0] = h[0];
        smax[n-1] = h[n-1];
        
        for(int i=1;i<n;i++){
            pmax[i] = max(h[i],pmax[i-1]);
        }
        for(int i = n-2;i>=0;i--){
            smax[i] = max(h[i],smax[i+1]);
        }
        int ans=0;
        for(int i = 1;i<n-1;i++){
            if(min(pmax[i-1],smax[i+1]) > h[i]){
                ans += min(pmax[i-1],smax[i+1]) - h[i];
            }
        }
        
        return ans;
    }
};