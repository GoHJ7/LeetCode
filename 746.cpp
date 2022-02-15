class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int memo[1000];
        memo[0]=cost[0];
        memo[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            memo[i]=min(cost[i]+memo[i-1],cost[i]+memo[i-2]);
        }
        return (memo[cost.size()-1]<memo[cost.size()-2])?memo[cost.size()-1]:memo[cost.size()-2];
    }
};
