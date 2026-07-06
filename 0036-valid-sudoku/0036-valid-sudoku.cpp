class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set <int> stb;
        for(int i=0;i<board.size();i++){
             set <int> str;
             set <int> stc;
            for(int j=0;j<board.size();j++){
                if(board[i][j]!='.'){
                 auto res= str.insert(board[i][j]);
                 if(!res.second)return false;
                }
                if(board[j][i]!='.'){
                 auto res = stc.insert(board[j][i]);
                 if(!res.second)return false;
                }                
            }
        }
       for (int r = 0; r < 9; r += 3) {
       for (int c = 0; c < 9; c += 3) {
        set<char> stb;
        for (int i = r; i < r + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                if (board[i][j] != '.') {
                    auto res = stb.insert(board[i][j]);
                    if (!res.second)
                        return false;
                }
            }
        }
    }
}
       
        return true;
    }
};