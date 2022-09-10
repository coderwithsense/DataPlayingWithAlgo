class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        unordered_map<char, int> umap;
        for(int i=0; i<s.size(); i++){
            umap[s[i]]++;
            if(umap[s[i]]==2){
                return s[i];
            }
        }
        return ans;
    }
};