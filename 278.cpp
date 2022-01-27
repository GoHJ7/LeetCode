// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int bs(long first, long last,int m)
    {
        if(first>last)
            return m;
        int mid=(first+last)/2;
        if(isBadVersion(mid))
        {
            m=min(m,mid);
            return min(m, bs(first,mid-1,m));
        }
        else
        {
            return min(m,bs(mid+1,last,m));
        }
    }
    int firstBadVersion(int n) {
        return bs(1,n,n);
    }
};
