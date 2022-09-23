class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n<=3){
            if(n==3 || n==1){
                return true;
            } else{
                return false;
            }
        }
        if(n%3==2){
            return false;
        }
        return checkPowersOfThree(n/3);
    }
};