class Solution {
public:
    int n;
    
    bool wordBreak(string s, vector<string>& wordDict) {
        bool dp[s.size()];
        for(int i=0;i<s.size();i++)
            dp[i]=false;
        bool is=false;
        for(int i=0;i<wordDict.size();i++){
            if(!s.compare(0,wordDict[i].size(),wordDict[i]))
            {
                   dp[wordDict[i].size()-1]=true;
                    is=true;
            }  
        }
        if(!is)
            return false;
        for(int i=0;i<s.size();i++){
            if(dp[i])
            {
                for(auto& c:wordDict){
                    if(!s.compare(i+1,c.size(),c))
                    {
                        if(i+c.size()<s.size())
                            dp[i+c.size()]=true;
                    }
                }
            }
        }
        if(dp[s.size()-1])
            return true;
        else return false;
    }
};
