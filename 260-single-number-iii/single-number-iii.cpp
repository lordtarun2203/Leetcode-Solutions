class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>umap;
        for(auto x:nums)
        {
            umap[x]++;
        }
        for(auto i: umap)
        {
            if(i.second==1)
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};