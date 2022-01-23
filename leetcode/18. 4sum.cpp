#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int target2 = target - nums[i] - nums[j];
                int l = j+1,r=n-1;
                while(l<r){
                    if(nums[l] + nums[r] < target2) l++;
                    else if(nums[l] + nums[r] > target2) r--;
                    else {
                        vector<int> quad(4);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[l];
                        quad[3] = nums[r];                        
                        ans.push_back(quad);
                        
                        while(l<r && nums[l] == quad[2]) l++;
                        while(l<r && nums[r] == quad[3]) r--;
                    }
                }
                
                while(j<n-1 && nums[j] == nums[j+1]) ++j;
            }
            while(i<n-1 && nums[i] == nums[i+1]) ++i;
        }
        
        return ans;
    }
};