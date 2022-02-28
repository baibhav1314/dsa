#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        for(int i = 0;i<n;i++){ 
            int l = i+1,r=n-1;
            while(l<r){
                int curr = nums[i] + nums[l] + nums[r];
                
                if(curr < target){
                    l += 1;
                } else {
                    r -= 1;
                }
                
                if(abs(curr - target) < abs(ans - target)){
                    ans = curr;
                }
            }
        }
        
        return ans;
    }
};