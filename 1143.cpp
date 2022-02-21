class Solution {
public:
    int memo[1000][1000]={0};
    int max_=0;
    int dp(string& t1,string& t2, int t1i,int t2i){
        if(t1i>=t1.size()||t2i>=t2.size())
            return 0;
        if(!memo[t1i][t2i]){
            if(t1[t1i]==t2[t2i]){
                memo[t1i][t2i]=1+dp(t1,t2,t1i+1,t2i+1);
            }
            else{
                memo[t1i][t2i]=max(dp(t1,t2,t1i+1,t2i),dp(t1,t2,t1i,t2i+1));   
            }
        }
        return memo[t1i][t2i];
    }
    int longestCommonSubsequence(string text1, string text2) {
        return dp(text1,text2,0,0);  
    }
};
