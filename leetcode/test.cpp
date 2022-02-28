#include<bits/stdc++.h>
using namespace std;

int solve(string s,int k){
    int n = s.length();
    vector<int> m(n, 0);

    // vector<int> psum(n);
    int psum = 0;
    for (int i = 0; i < n;i++){
        psum = (s[i] - '0') + psum;
        m[psum]++;
    }
    if(psum < k){
        return -1;
    }

    int ans = 0;
    for (int i = psum; i > k;i--){
        ans += m[i] * m[i - k];
    }
    if(m[0] > 0)
        ans += m[k]*m[0];
    else {
        ans += m[k];
    }
    return ans;
}

int main(){
    string s = "0101001";
    int k = 1;
    cout << solve(s, k);
    return 0;
}
