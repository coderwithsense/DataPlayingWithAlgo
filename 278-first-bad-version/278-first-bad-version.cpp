// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
private:
    int amr(long long s , long long e){
    long long ans ;
    while(s<=e)
    {
        long long mid = (s+e)/2 ;
        bool bad = isBadVersion(mid) ;
        if(!bad)
            s = mid +1 ;
            
        else
        {
            e = mid - 1 ;
            ans = mid ;
        }    
    }
    return ans ;
}
public:
    int firstBadVersion(int n) {
        return amr(0, n);
    }
};