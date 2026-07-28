class Solution {
public:
    string reverseWords(string s) {
        string word;
        vector<string> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }else if(!word.empty()){
                ans.push_back(word);
                word.clear();
            }
        }
        if(!word.empty())ans.push_back(word);
        string rev;
        for(int i=ans.size()-1;i>=0;i--){
            rev+=ans[i];
            if(i!=0)rev+=" ";
        }
        return rev;
    }
};