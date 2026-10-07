class Solution {
public:
    vector<int> dp = vector<int>(50, -1);

    int tribonacci(int n) {
        if (n == 0 || n == 1)
            return n;
        if (n == 2)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = tribonacci (n-1) + tribonacci (n-2) + tribonacci (n-3);
    }
};
