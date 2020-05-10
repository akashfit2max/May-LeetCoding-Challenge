class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(trust.size()==0){
            return 1;
        }
        unordered_set<int>s;
        unordered_map<int,int>mp;
        for(int i=0;i<trust.size();i++){
            s.insert(trust[i][0]);
            int key=trust[i][1];
            if(mp.find(key)!=mp.end()){
                mp[key]++;
            }else{
                mp[key]=1;
            }
        }
        for(auto i:mp){
            if(i.second==N-1 && s.find(i.first)==s.end()){
                return i.first;
            }
        }
        return -1;
    }
};
