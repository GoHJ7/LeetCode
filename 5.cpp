class Solution {
public:
    string longestPalindrome(string s) {
        int a=5;
        bool p[1000][1000];
        string ret;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i>j){
                 p[i][j]=false;   
                }
                if(i==j){
                    p[i][j]=true;
                }
                else if(j-i==1){
                    if(s[j]==s[i])
                        p[i][j]=true;
                    else
                        p[i][j]=false;
                }
                else
                {
                    p[i][j]=false;
                }
            }
        }
        /*
         for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(p[i][j])
                    cout<<"true ";
                else
                    cout<<"false ";
            }
             cout<<endl;
         }
         */
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i>j || !p[i][j])
                {
                    continue;
                }
                else{
                    int f=i-1,r=j+1;
                    while(f>=0&&r<s.size())
                    {
                        if(s[f]==s[r]){
                            p[f][r]=true;
                        }
                        else
                            break;
                        f--;r++;
                    }
                }
            }
        }
        /*
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(p[i][j])
                    cout<<"true ";
                else
                    cout<<"false ";
            }
             cout<<endl;
         }
         */
        int f=0,r=0;
        int max=0;
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>i;j--){
                if(p[i][j])
                {
                    if(max<j-i+1){
                        max=j-i+1;
                        f=i;
                        r=j;
                    }
                    break;
                }
            }
        }
       for(int i=f;i<=r;i++){
           ret.push_back(s[i]);
       }
        return ret;
    }
};
