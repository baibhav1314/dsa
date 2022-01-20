#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> repeatedNumber(const vector<int> &A) {
    long long int n = A.size();

    long long S = (n*(n+1))/2;
    long long P = (n*(n+1)*(2*n+1))/6;

    for(auto i : A){
        S -= (long long)i;
        P -= (long long)i*(long long)i;
    }
    long long b = (S + P/S)/2;
    long long a = b - S;

    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
    }
   
};

