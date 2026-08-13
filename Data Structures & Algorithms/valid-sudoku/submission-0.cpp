class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> col(9), row(9), sq(9);
        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){
                char x = board[r][c];
                if(x=='.') continue;
                int squ = (r/3)*3+(c/3);
                if(row[r].contains(x)||col[c].contains(x)||sq[squ].contains(x)) return false;
                row[r].insert(x);
                col[c].insert(x);
                sq[squ].insert(x);
            }
        }
        return true;
    }
};
