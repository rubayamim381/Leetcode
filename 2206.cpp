/* Approach 1: Using Map
TC: O(n)
SC: O(n)
*/

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        bool canDivided = true;

        for(auto& e: nums)
        {
            mp[e]++;
        }

        for(auto& e: nums)
        {
            if(mp[e]%2 != 0)
               return canDivided = false;
        }

        return canDivided;

    }
};

/* Approach 2: Using Sort
TC: O(nlogn)
SC: O(logn)
*/

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] != nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};


/* Approach 3: using XOR
TC: O(n)
SC: O(1)
*/
class Solution {
    public boolean divideArray(int[] nums) {
        int len = nums.length;
        int xor1=0, xor2=0;
        
        for(int i=0;i<len;i++){
            xor1 = nums[i]^xor1;
            xor2 = (nums[i]+1)^xor2;
        }

        return xor1==0 && xor2==0;
    }
}

