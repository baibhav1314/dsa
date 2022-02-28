#include<bits/stdc++.h>

using namespace std;

class Solution {
    void backtracking(vector<int> &arr,int ind,int target,vector<int> &temp,vector<vector<int>> &ans){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return ;    
        }
        
        if(arr[ind] <= target){
            temp.push_back(arr[ind]);
            backtracking(arr,ind,target - arr[ind],temp,ans);
            temp.pop_back();
        }
        
        backtracking(arr,ind+1,target,temp,ans);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtracking(candidates,0,target,temp,ans);
        
        return ans;
    }
};