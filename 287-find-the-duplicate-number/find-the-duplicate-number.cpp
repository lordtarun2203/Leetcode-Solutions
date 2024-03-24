class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>umap;
        for(auto x:nums)
        {
            umap[x]++;
        }
        for(auto c:umap)
        {
            if(c.second!=1)
            {
                return c.first;
            }
        }
        return 1;
        
    }
};