class Solution {
public:
    vector<int> s;
    int bs(int first, int last, int target){
        if(first>last)
        {
            if(target>s[first])
                return first+1;
            else
                return first;
        }
        int mid=(first+last)/2;
        if(target>s[mid])
        {
            return bs(mid+1, last, target);
        }
        else if(target<s[mid])
            return bs(first,mid-1,target);
        else
            return mid;
    }
    int searchInsert(vector<int>& nums, int target) {
        s=nums;
        if(nums[nums.size()-1]<target)
            return nums.size();
        return bs(0,nums.size()-1,target);
    }
};
