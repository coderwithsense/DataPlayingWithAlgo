class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap, umap2;
        for(int i:s){
            umap[i]++;
        }
        for(char i:t){
            umap2[i]++;
        }
        if(umap==umap2){
            return true;
        }
        return false;
    }
};