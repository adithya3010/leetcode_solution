class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]=digits[n-1]+1;
            return digits;
            }else{
                int nonNine=-1;
                for(int i=n-1;i>=0;i--){
                    if(digits[i]!=9){
                        nonNine=i;
                        break;
                    }
                }
                if(nonNine==-1){
                    vector<int> ans(n+1, 0);
                    ans[0] = 1;
                    digits=ans;
                }else{
                digits[nonNine]++;
                for(int i=nonNine+1;i<digits.size();i++){
                    digits[i]=0;
                }
            }
                }
       return digits;
            }

    };
