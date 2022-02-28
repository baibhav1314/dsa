#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count += 1;
            } else {
                count = 0;
            }
            ans = max(count,ans);
        }
        
        return ans;
    }
};