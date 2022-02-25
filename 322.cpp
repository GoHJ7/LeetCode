class Solution {
public:
    int memo[10001]={0};
    vector<int> coin;
    int n;
    int dp(int amount){
        if(amount<=0)
            return 0;
        if(!memo[amount])
        {
            memo[amount]=INT_MAX-1;
            for(int c:coin){
                if(amount-c<0)
                    continue;
                memo[amount]=min(dp(amount-c)+1,memo[amount]);
            }
        }
        return memo[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        coin=coins;
        n=amount;
        for(int i=0;i<coins.size();i++){
            if(amount<coins[i])
                continue;
            memo[coins[i]]=1;
        }
        int ret=dp(amount);
        return ret==INT_MAX-1?-1:ret;
    }
};
