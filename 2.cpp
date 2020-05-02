class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(auto i:J){
            for(auto j:S){
                if(i==j){
                    count++;
                }
            }
        }
        return count;
    }
};
