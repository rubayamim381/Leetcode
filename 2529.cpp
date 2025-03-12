class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg_mx = 0;
        int pos_mx = 0;
        
        for(auto& p: nums)
        {
            if(p == 0) continue;
            
            if(p < 0) neg_mx++;
            else pos_mx++;
                
        }
        
        return max(neg_mx, pos_mx);
    }
};
