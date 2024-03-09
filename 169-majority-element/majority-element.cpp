class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int max1=0;
        int max2=0;
        
        for(auto x: nums)
        {
            umap[x]++;
        }
        for(auto c: umap)
        {
            if(c.second>max2)
            {
                max1=c.first;
                max2=c.second;
            }
            
        }
        return max1;
    
    
    }
};