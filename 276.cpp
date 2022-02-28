class Solution {
public:
    int memo[51]={0};
    int numWays(int n, int k) {
        memo[1]=k;
        memo[2]=k*k;
        if(n>2&&k==1)
            return 0;
        for(int i=3;i<=n;i++){
            memo[i]=(k-1)*(memo[i-1]+memo[i-2]);
        }
        return memo[n];
    }
};
