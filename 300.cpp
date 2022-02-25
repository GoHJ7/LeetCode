class Solution {
public:
    int memo[2500]={0};
    int lengthOfLIS(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i;j>=0;j--){
                if(nums[i]>nums[j]){
                    memo[i]=max(memo[i],memo[j]+1);
                }
            }
        }
        int ret=0;
        for(int i=0;i<nums.size();i++){
            if(ret<memo[i])
                ret=memo[i];
        }
        return ret+1;
    }
};
