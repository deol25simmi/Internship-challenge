class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
      int ans =0,sum=0;
        unordered_map<int,int>mp;
        mp.insert({0,1});
        for (int i = 0; i < a.size(); i++) {
            sum = (sum + a[i] % k + k) % k;
            ans += mp[sum];
            mp[sum]++;
        }

        return ans;
    }
};