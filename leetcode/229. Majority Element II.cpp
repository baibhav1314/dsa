#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0;
        int num1 = -1,num2 = -1;
        
        for(auto num:nums){
           
            if(num == num1){
                c1++;
            }
            else if(num == num2){
                c2++;
            }
            else if(c1==0){
                num1 = num;
                c1 = 1;
            }
            else if(c2 == 0){
                num2 = num;
                c2 = 1;
            }
            else {
                c1--;c2--;
            }
        }
        
        c1=0;c2=0;
        
        for(auto num:nums){
            if(num == num1) c1++;
            else if(num == num2) c2++;
        }
        
        int n = nums.size()/3;
        vector<int> ans;
        if(c1 > n) ans.push_back(num1);
        if(c2>n ) ans.push_back(num2);
        
        return ans;
    }
};