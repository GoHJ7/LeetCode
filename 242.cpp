class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            count[s[i]-97]++;
        }
        for(int i=0;i<t.size();i++){
            if(count[t[i]-97])
                count[t[i]-97]--;
            else return false;
        }
        for(int i=0;i<26;i++){
            if(count[i])
                return false;
        }
        return true;
    }
};
