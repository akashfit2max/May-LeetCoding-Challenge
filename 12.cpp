class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto i:mp){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
    }
};
