#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0,r=n-1;
        vector<int> ans(2);
        while(l<r){
            int tot = nums[l] + nums[r];
            if(tot < target) ++l;
            else if(tot > target) --r;
            else {
                ans[0] = l+1;
                ans[1] = r+1;
                break;
            }
        }
        return ans;
    }
};