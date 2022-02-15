class Solution {
public:
    int climbStairs(int n) {
        int memo[46]={0};
        memo[1]=1;
        memo[2]=2;
        for(int i=3;i<=n;i++){
            memo[i]=memo[i-1]+memo[i-2];
        }
        return memo[n];
    }
};
