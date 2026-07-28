class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length()==1)return s;
        vector<int>freq(26,0);
        string ans;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        char mid='\0';
        for(int k=0;k<26;k++){
            if(freq[k]%2!=0){
              mid=char('a'+k);
              freq[k]--;
            }
          if(freq[k]!=0){
            int f=freq[k]/2;
            ans.append(f,char('a'+k));
            freq[k]-=f;
          }
        }
        if(s.length()%2!=0){
            ans.append(1, mid);
            
        }
        for(int k=25;k>=0;k--){
          if(freq[k]!=0){
            int f=freq[k];
            ans.append(f,char('a'+k));
            freq[k]-=f;
          }
        }
        return ans;
    }
};