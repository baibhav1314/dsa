#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;
        long long nn = n;
        if(nn < 0){
            x = 1/x;
            nn = (-1)*nn;
        }
        
        double ans = 1;
        
        while(nn){
            if(nn%2){
                nn = nn-1;
                ans *= x;
            }
            else {
                x *= x;
                nn /= 2;
            }
        }
        return ans;
    }
};