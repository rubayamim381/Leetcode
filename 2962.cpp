/*
Approach-1: Brute Force
TC: O(n^2)
SC: O(1)
*/
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long maxi = *max_element(nums.begin(), nums.end()), count = 0; 

        for (int i = 0 ; i < nums.size() ; i++) {
            long maxOccurrences = 0;
            for (int j = i ; j < nums.size() ; j++) {
                if (nums[j] == maxi) ++maxOccurrences;
                if (maxOccurrences >= k) {
                    ++count;
                }
            }
        } 
        return count;
    }
};

/*
Approach-2: Sliding Window
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int max_num = *max_element(nums.begin(),nums.end()),count = 0;
        long long int left = 0,right = 0,ans = 0;
        while(right<nums.size()){
            if(nums[right] == max_num)count++;
            
            while(count>=k){
                if(nums[left]==max_num)count--;
                left++;
                ans += nums.size()-right;
            }    
            right++;
        }

        return ans;
        
    }
};
