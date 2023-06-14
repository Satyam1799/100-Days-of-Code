class Solution {
public:
    int reverse(int x) { 
        int ans=0;
        while(x !=0){
            /*x%10. means 
%10 will divide the given number by 10 and return whatever the remainder is left*/
            int digit = x %10;
/*condition h ki ans jo h int ka max ya min ho to 0 ans de dena hai*/
            if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
                return 0;
            }
            ans = (ans * 10) + digit;
            x=x/10;
        }
        return ans;
        
        
    }
};