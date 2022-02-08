class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        int i=0,j=0;
        while(1)
        {
            if(i<nums1.size()&&j<nums2.size())
            {
                if(nums1[i]<=nums2[j])
                {
                    ret.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    ret.push_back(nums2[j]);
                    j++;
                }
            }
            else if(i>=nums1.size()&&j<nums2.size())
            {
                ret.push_back(nums2[j]);
                j++;
            }
            else if(i<nums1.size()&&j>=nums2.size())
            {
                ret.push_back(nums1[i]);
                i++;
            }
            else
                break;
        }
        if(ret.size()%2)
        {
            return (double)ret[ret.size()/2];
        }
        else
        {
            return (double)(ret[ret.size()/2-1]+ret[ret.size()/2])/2.0;
        }
    }
};
