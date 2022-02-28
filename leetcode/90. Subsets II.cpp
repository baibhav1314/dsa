#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void getSubset(vector<int> &nums,int ind,int n,vector<vector<int>> &ans,vector<int> &p){
        ans.push_back(p);
        
        for(int i = ind;i < n;i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            p.push_back(nums[i]);
            getSubset(nums,i+1,n,ans,p);
            p.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> p;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        getSubset(nums,0,n,ans,p);
        
        return ans;
    }
};