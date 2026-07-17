class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(string &sentence: sentences){
            ans = max(ans,(int)count(sentence.begin(),sentence.end(),' ')+1);
             // Words = spaces + 1
        }
        return ans;
    }
};