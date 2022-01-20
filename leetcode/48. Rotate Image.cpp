#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //transpose
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j > i)
                    swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }
    }
};