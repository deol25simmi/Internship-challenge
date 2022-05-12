class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>rmap;
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            temp = nums[i];
            rmap[temp]++;
        }
        for(auto it:rmap)
        {
            if(it.second == 2)
                ans.push_back(it.first);
        }
        return ans;
    }
};