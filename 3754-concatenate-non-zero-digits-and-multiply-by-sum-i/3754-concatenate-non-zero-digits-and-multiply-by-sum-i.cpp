class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        string s= to_string(n);
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        int x=stoi(s);
        n=x;
        int sum=0;
        while(n>0){
          int rem =n%10;
          sum+=rem;
          n/=10;
        }
        return (long long)sum*x;
    }
};