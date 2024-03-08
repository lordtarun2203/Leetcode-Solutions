class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>umap;
        int ma=0;
        int res=0;
        for(auto x: nums)
        {
            umap[x]++;
        }
       for(auto c:umap)
        {
            
            if(c.second> ma)
            {
                ma=c.second;
            }
        }
        for(auto g: umap)
        {
            if(g.second==ma)
            {
                res=res+ma;
            }
        }
        return res;

        }
};