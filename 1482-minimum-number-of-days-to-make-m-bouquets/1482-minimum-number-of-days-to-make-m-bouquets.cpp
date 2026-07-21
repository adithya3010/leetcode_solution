class Solution {
public:
    bool canMake(vector<int>&bloom,int m,int k,int n){
        int cnt=0;
        int canM=0;
        for(int i=0;i<bloom.size();i++){
          if(bloom[i]<=n){
            canM++;
          }else{
            canM=0;
          }
          if(canM==k){
            canM=0;
            cnt++;
          }
        }
        if(cnt>=m)return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
      if((long long)k*m>bloomDay.size())return -1;
      int low = *min_element(bloomDay.begin(), bloomDay.end());
      int high = *max_element(bloomDay.begin(), bloomDay.end());
      int minD=-1;
      while(low<=high){
           int mid=(low+high)/2;
           if(canMake(bloomDay,m,k,mid)){
            minD=mid;
            high=mid-1;
           }else{
            low=mid+1;
           }
      }
      return minD;  
    }
};