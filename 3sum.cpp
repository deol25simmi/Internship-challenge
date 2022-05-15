class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int l,r,n= nums.size();
        for(unsigned int i=0;i<nums.size();i++)
        {
            if( i>0 && nums[i] == nums[i-1])
                continue;
            l = i+1,r= n-1;
            while(l<r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum>0)
                    r--;
                else if(sum<0)
                    l++;
                else
                {
                    ans.push_back(vector<int>{nums[i],nums[l],nums[r]});
                    while( (l<r) && (nums[l] == nums[l+1]))
                        l++;
                    while((l<r) && (nums[r] == nums[r-1]))
                        r--;
                     l++; r--;
                }
            }
        }
        return ans;
        
        
    }
};