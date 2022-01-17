class Solution {
public:
    bool containsDuplicate(vector<int> nums) {
        using namespace std;
        priority_queue<int> mypq;
        int current;
        for(int i=0;i<nums.size();i++){
            mypq.push(nums[i]);
        }
        current = mypq.top();
        mypq.pop();
        while(mypq.size())
        {
            if(current==mypq.top())
                return true;
            current = mypq.top();
            mypq.pop();
        }
        return false;
    }
};
