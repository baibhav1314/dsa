#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0,maxE = 0;
        
        for(int i = 0;i<n;i++){
            if(count == 0){
                maxE = nums[i];
            }
            (maxE == nums[i]) ? ++count : --count;
        }
        
        return maxE;
    }
};