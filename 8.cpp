class Solution {
public:
    int myAtoi(string s) {
        bool is_neg=false;
        int step=0;
        queue<int> st;
        for(int i=0;i<s.size();i++){
            if(step==2)
                break;
            switch(step){
                case 0:
                    if(s[i]=='-'){
                        is_neg=true;
                        step=1;
                        continue;
                    }
                    else if(s[i]=='+'){
                        step=1;
                        continue;
                    }
                    else if(s[i]>=48&&s[i]<58){
                        step=1;
                        i--;
                        continue;
                    }
                    else if(s[i]==' ')
                        continue;
                    else
                    {
                        step=2;
                    }
                    break;
                case 1:
                    if(s[i]>=48&&s[i]<58){
                        st.push(s[i]-48);
                        continue;
                    }
                    else{
                        step=2;
                        continue;
                    }
                    break;
                default:
                    cout<<"error";
                    break;
            }
        }
        long long ret=0;
        bool is_int=true;
        while(st.size()){
            if(ret>INT_MAX)
            {
                is_int=false;
                break;
            }
            ret=ret*10+st.front();
            st.pop();
        }
        if(is_neg)
            ret=-ret;
        if(ret>INT_MAX)
            return 2147483647;
        else if(ret<INT_MIN)
            return -2147483648;
        else
            return ret;
    }
};
