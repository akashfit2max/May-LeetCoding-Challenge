class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0){
            num=num-i;
            i=i+2;
        }
        return num==0;
    }
};
    
    
    
/*  a=1;
    b=4     b=a+3;
    c=9     c=b+5;
    d=16    d=c+7;
    */
