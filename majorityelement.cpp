class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int max = 0,major = nums[nums.size()/2];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]== major)
                max++;
            if(max> nums.size()/2)
                return major;
        }
        return 0;
    }
};