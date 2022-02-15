class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int m[10001]={0};
        int memo[10001];
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=nums[i];
        }
        memo[1]=m[1];
        int max=memo[1];
        for(int i=2;i<10001;i++){
            if(m[i]==0)
                memo[i]=max;
            else
                memo[i]=(memo[i-2]+m[i]>max)?memo[i-2]+m[i]:max;
            if(max<memo[i])
                max=memo[i];
        }
        return max;
    }
};
