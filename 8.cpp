class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slope=calculate(coordinates[0],coordinates[1]);
        for(int i=2;i<coordinates.size();i++){
            if(slope!=calculate(coordinates[0],coordinates[i])){
                return false;
            }
        }
        return true;
    }
    //finding slope
    double calculate(vector<int>p1,vector<int>p2){
        return ((p1[1]-p2[1])*1.0)/((p1[0]-p2[0])*1.0);
    }
};
