#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int> m;
        
        for(auto k:nums3){
            for(auto l:nums4){
                m[k+l]++;
            }
        }
        int count=0;
        for(auto i:nums1){
            for(auto j:nums2){
                count += m[-(i+j)];
            }
        }
        return count;
    }
};