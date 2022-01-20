#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-1;
        for(i = n-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                for(int j = n-1;j>=i;j--){
                    if(nums[j] > nums[i-1]){
                        swap(nums[i-1],nums[j]);
                        reverse(nums.begin()+i, nums.end());
                        break;
                    }
                }
                break;
            }
        }
        if(i==0)
            reverse(nums.begin(),nums.end());
    }
};