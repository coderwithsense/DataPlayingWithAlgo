class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=1;
        for(int i=0; i<sentences.size(); i++){
            int cnt=1;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j]==' '){
                    cnt++;
                }
            }
            if(cnt>ans){
                ans=cnt;
            }
        }
        return ans;
    }
};