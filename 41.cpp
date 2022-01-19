class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //when to stop
        //when temp>=length or temp = index+1
        int check=0;
        int temp;
        int current_index;
        while(check<nums.size())
        {
            //check phase
            if(nums[check]==check+1)
            {
                check++;
                continue;
            }
            //check false, current phase
            current_index=check;
            temp=nums[current_index];
            while(temp>0&&temp<=nums.size()&&nums[temp-1]!=temp)
            {
                
                current_index=nums[temp-1];
                nums[temp-1]=temp;
                temp=current_index;
            }
            check++;
        }
        int s=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
            {
                s=i;
                break;
            }
            if(i==nums.size()-1)
                s=nums.size();
        }
        return s+1;
    }   
};
