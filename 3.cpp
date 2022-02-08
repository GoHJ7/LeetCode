class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_index=0;
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            int check[128]={0};
            int local_max=0;
            for(int j=i;j<s.size();j++)
            {
                //int b=s[j];
                    if(check[s[j]])
                    {
                            break;
                    }
                    else
                    {
                        local_max++;
                        check[s[j]]++;
                    }
            }
            if(local_max>max)
                max=local_max;
        }
        return max;
    }
};
