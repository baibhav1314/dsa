#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        map<char,int> mp;
        int p = 0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i]) != mp.end()){
                p = max(p,mp[s[i]] + 1);
            }
            ans = max(ans,i - p + 1);
            cout<<ans<<" ";
            mp[s[i]] = i;
        }
        
        return ans;
    }
};