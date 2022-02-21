class Solution {
public:
    int memo[1001][1001]={0};
    int sum=0;
    int dp(vector<int>& n, vector<int>& m,int ni,int mi,int c){
        if(c>=m.size())
            return 0;
        if(!memo[ni][mi])
        {
            memo[ni][mi]=max(n[ni]*m[c]+dp(n,m,ni+1,mi,c+1),n[n.size()-mi-1]*m[c]+dp(n,m,ni,mi+1,c+1));
        }
        return memo[ni][mi];
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        return dp(nums,multipliers,0,0,0);
    }
};
