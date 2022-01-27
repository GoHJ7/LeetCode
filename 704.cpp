class Solution {
public:
    int bs(vector<int>& nums, int target, int first,  int last)
    {
        if(first>last)
            return -1;
        int mid=(first+last)/2;
        if(nums[mid]>target)
        {
            return bs(nums,target,first, mid-1);
        }
        else if(nums[mid]<target)
            return bs(nums,target,mid+1, last);
        else
            return mid;
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1);
    }
};
