class Solution {
public:
    bool isPalindrome(int x) {
        int digit[10]={0};
        int count=0;
        if(x<0)
            return false;
        while(x){
            digit[count++]=x%10;
            x=x/10;
        }
        count--;
        int i=0,j=count;
        while(i<=j){
            if(digit[i]!=digit[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
