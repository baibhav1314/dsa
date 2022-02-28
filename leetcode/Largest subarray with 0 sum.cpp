#include<bits/stdc++.h>

using namespace std;
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        vector<int> psum(n);
        psum[0] = A[0];
        
        for(int i=1;i<n;i++){
            psum[i] = A[i]+psum[i-1];
        }
        
        map<int,int> mp;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(psum[i] == 0)
                ans = max(ans,i+1);
            else if(mp.find(psum[i]) != mp.end()){
                ans = max(ans,i - mp[psum[i]]);
            }
            else {
                mp[psum[i]] = i;
            }
        }
        
        return ans;
    }
};