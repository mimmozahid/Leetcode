class Solution {
public:
    int dp[1009];

    int f(int i, vector<int>& cost)
    {
        if (i == 0 || i == 1)
            return 0;
        
        if (dp[i] != -1)
            return dp[i];

        int a = cost[i-1] + f (i-1, cost);
        int b = cost[i-2] + f (i-2, cost);

        return dp[i] = min (a, b);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        memset (dp, -1, sizeof (dp));
        
        return f(cost.size(), cost);
    }
};
