class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>umap;
        //store the frequency of each element
        for(auto c:magazine){
            umap[c]++;
        }
        //iterate and decrement the frequency
        for(auto ch:ransomNote){
            if(umap[ch]>0){
                umap[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
