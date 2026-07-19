class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int row_size=matrix.size();
      int col_size=matrix[0].size();
      int low=INT_MIN;
      int high=col_size-1;
      for(int i=0;i<row_size;i++){
        if(matrix[i][0]<=target&&matrix[i][col_size-1]>=target){
           low=i;
           int l1=0;
           while(l1<=high){
        int mid=(l1+high)/2;
        if(matrix[low][mid]==target){
            return true;
        }else if(matrix[low][mid]<target){
            l1=mid+1;
        }else{
            high=mid-1;
        }
      }
      return false; 
        }
      }      
      return false;
        }
};