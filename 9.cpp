class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || x!=0 && x%10 == 0)
            return false;
        
        int half_x = 0;
        while(half_x < x)
        {
            half_x = half_x*10 + x%10;
            x /= 10;
        }

        return (x==half_x || x==half_x/10);

    }
};
