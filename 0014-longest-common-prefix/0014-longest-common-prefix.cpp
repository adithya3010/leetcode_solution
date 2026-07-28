class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word="";
        for(int i=0;i<strs.size();i++){
            if(i==0)word=strs[0];
            string lPr;
            for(int j=0;j<strs[i].size();j++){
                string wr=strs[i];
                int siz=word.size();
                if(j>=word.size())break;
                if(word[j]==strs[i][j]){
                    lPr+=word[j];
                }else{
                    break;
                }
            }
            if(lPr.empty())return "";
            word=lPr;
        }
        return word;
    }
};