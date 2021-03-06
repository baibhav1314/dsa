#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1) return nums[0];
        int sum = 0,maxSum = nums[0];
        for(int i=0;i<n;i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0) sum = 0;
        }
        
        return maxSum;
    }
};