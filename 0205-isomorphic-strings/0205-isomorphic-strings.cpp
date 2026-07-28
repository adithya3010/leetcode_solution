class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mp(256,-1);
        vector<int> mpt(256,-1);
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==-1){
                mp[s[i]]=t[i];
                if(mpt[t[i]]!=-1)return false;
                mpt[t[i]]=s[i];
            }else if(mp[s[i]]!=t[i]||mpt[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};