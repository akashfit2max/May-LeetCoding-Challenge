class Solution {
public:
    int findComplement(int num) {
        //The binary representation of 1 is 1 and its complement is 
        if(num==0){
            return 1;
        }
        int i=0 , j=0;
        while(i<num){
            i+=pow(2,j);
            j++;
        }
        //largest num that can be formed by the bits. then sub it frm num or u can also do "return i^num" XOR
        return i-num;
    }
};
