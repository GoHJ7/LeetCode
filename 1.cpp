class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        vector<int> ret;
        for(int i=0;i<nums.size();i++)
            hash_map.insert(make_pair(nums[i],i));
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(i==0)
                continue;
            unordered_map<int,int>::const_iterator it=hash_map.find(complement);
            if(it==hash_map.end())
                continue;
            else
            {
                ret.push_back(i);
                ret.push_back(it->second);
                break;
            }
        }
        return ret;
    }
};
