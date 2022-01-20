#include<bits/stdc++.h>

using namespace std;

//DP Solution
class Solution {
    int solve(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        else return dp[i][j] = solve(i,j+1,m,n,dp) + solve(i+1,j,m,n,dp);
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int> (n,-1));
        return solve(0,0,m,n,dp);
    }
};

//Combinatorics
class Solution1 {
    
public:
    int uniquePaths(int m, int n) {
        //m+n-2Cm-1
        long long res=1;
        for(int i=0;i<min(m,n)-1;i++){
            res *= m+n-2 - i;
            res /= i+1;
        }
        
        return (int)res;
    }
};