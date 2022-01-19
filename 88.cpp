class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a;
        a.assign(nums1.begin(),nums1.begin()+m);
        int count=nums1.size();
        int acount=0,bcount=0;
        for(int i=0;i<count;i++)
        {
            if(acount==m)
            {
                 nums1[i]=nums2[bcount];
                 bcount++;
                continue;
            }
            if(bcount==n)
            {
                nums1[i]=a[acount];
                acount++;
                continue;
            }
            if(a[acount]<=nums2[bcount])
            {
                nums1[i]=a[acount];
                acount++;
            }
            else
            {
                nums1[i]=nums2[bcount];
                bcount++;
            }
        }
    }
};
