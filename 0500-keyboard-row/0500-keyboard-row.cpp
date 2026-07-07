class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        vector<string> ans;      
        for(int i=0;i<words.size();i++){
            int r1c=0,r2c=0,r3c=0;
            for(int j=0;j<words[i].size();j++){
               if (row1.find(tolower(words[i][j])) != string::npos){
                    if(r2c!=0||r3c!=0)break;
                    r1c++;
                }else if(row2.find(tolower(words[i][j])) != string::npos){
                    if(r1c!=0||r3c!=0)break;
                    r2c++;
                }else if(row3.find(tolower(words[i][j])) != string::npos){
                    if(r1c!=0||r2c!=0)break;
                    r3c++;
                }
            }
            if((r1c==words[i].size())||(r2c==words[i].size())||(r3c==words[i].size())){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};