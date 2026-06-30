class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)return {1};
        vector<vector<int>> pascal(rowIndex+1);
        for(int i = 0; i <= rowIndex; i++) {
           pascal[i].resize(i + 1);
               }
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    pascal[i][j]=1;
                }else{
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                }
            }
        }
        return pascal[rowIndex];
    }
};