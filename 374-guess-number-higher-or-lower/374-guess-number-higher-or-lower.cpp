/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long s=0, e=n;
        int ans = 0;
        
        while(true){
            long long mid = (s+e)/2;
            int guesskro = guess(mid);
            if(guesskro == -1){
                e = mid-1;
            } else{
                s = mid+1;
            }
            
            if(guesskro == 0){
                ans=mid;
                break;
            }
        }
        return ans;
    }
};