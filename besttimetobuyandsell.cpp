class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,minpr=99999,maxpr=0,max=0,n=prices.size();
        for(i=0;i<n;i++)
        {
           minpr = min(minpr,prices[i]);
            maxpr = prices[i]-minpr;
            if(maxpr > max)
                max = maxpr;
    }
        return max;
    }
};