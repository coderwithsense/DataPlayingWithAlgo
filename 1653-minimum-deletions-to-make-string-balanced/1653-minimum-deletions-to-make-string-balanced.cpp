class Solution {
public:
    int minimumDeletions(string s) {
        
        // CAN BE A SOLUTION
        int ans=0, countB=0;
        for(auto i:s){
            if(i=='b') countB++;
            if(i=='a' && countB>0) ans++, countB--;
        }
        return ans;
        // <--END-->
        
        // DONE WITH SOLUTION, DO IT AGAIN
    }
};