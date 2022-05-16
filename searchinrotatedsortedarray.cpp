class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n= nums.size(),i;
        for(i=0;i<n;i++)
        {
            mp.insert({nums[i],i});
        }
        for(auto it: mp)
        {
            if(it.first == target)
                return it.second;
        }
        return -1;
    }
};