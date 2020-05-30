class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0,ans=0,i;
        unordered_map<int,int>umap;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
        }
        umap[0]=-1;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(umap.find(sum)!=umap.end())
            {
                ans=max(ans,i-umap[sum]);
            }
            else
            {
                umap[sum]=i;
            }
        }
        return ans;
        
    }
};
