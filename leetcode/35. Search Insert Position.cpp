#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        int mid;
        
        while(l<=h){
            mid = l + (h-l)/2;
            
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target){
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        
        if(nums[mid] > target) return mid;
        return mid+1;
    }
};