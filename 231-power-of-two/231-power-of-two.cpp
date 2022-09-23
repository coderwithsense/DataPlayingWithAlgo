class Solution {
public:
    bool isPowerOfTwo(double n) {
        if(n<2){
            if(n==2 || n==1){
                return true;
            }else{
                return false;
            }
        }
        return isPowerOfTwo(n/2);
    }
};