class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size()-1;

        for(int i=last; i>=0; i--)
        {
        	//when last digit = 9
            if(digits[i] == 9)
            {
                digits[i] = 0;
                if(i == 0)
                {
                    digits.insert(digits.begin(),1);
                    break;
                }
            }
            
        	//when last digit != 9
            else {
                digits[i]++;
                break;
            }
        }
        return digits;

    }
};
