class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       vector<int> msel;
        if(arr[0]!=1){
            int num=1;
            while(num<arr[0]){
                msel.push_back(num);
                num++;
            }
        }
       for(int i=1;i<arr.size();i++){
        if(arr[i]-arr[i-1]!=1){
            int num=arr[i-1]+1;
            while(num<arr[i]){
                msel.push_back(num);
                num++;
                }
        }
       } 
       if(msel.size()<k){
         int diff=k-msel.size();
         int num=arr[arr.size()-1]+1;
         for(int i=0;i<diff;i++){
            msel.push_back(num);
            num++;
         }
       }
       return msel[k-1];
    }
};