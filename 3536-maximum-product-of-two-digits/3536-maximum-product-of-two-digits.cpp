class Solution {
public:
    int maxProduct(int n) {
        int fmax=-1,smax=-1;
        while(n>0){
            int rem=n%10;
                if(fmax<rem){
                 smax=fmax;
                 fmax=max(fmax,rem);
                }else if(smax<rem){
                 smax=max(smax,rem);
                }
            n=n/10;
        }
       return fmax*smax;
    }
};