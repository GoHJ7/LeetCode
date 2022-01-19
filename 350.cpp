class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int a[1001]={0};
        vector<int> ret;
        for(int i=0;i<nums1.size();i++)
        {
            a[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
              {
                  if(a[nums2[i]]>0)
                  {
                        a[nums2[i]]--;
                      ret.push_back(nums2[i]);
                  }
                      
              }
              return ret;
    }
};
