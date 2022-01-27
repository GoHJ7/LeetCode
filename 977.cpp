class Solution {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]*nums[i]);
        }
        vector<int> ret;
        for(int i=0;i<nums.size();i++)
        {
            ret.push_back(pq.top());
            pq.pop();
        }
        return ret;
    }
};
