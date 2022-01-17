class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        using namespace std;
        int submax=nums[0];
        int tmax=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            submax=max(nums[i],nums[i]+submax);
            tmax=max(tmax,submax);
        }
        return tmax;
    }
};
