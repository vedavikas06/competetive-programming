class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size(), m =board[0].size();
        
        int final_to_be_reached = n*m, temp_pos;
        vector<bool> visited(n*m+1, false);
        
        queue<pair<int, int>> path;
        path.push({1,0});
        while(!path.empty()){
            pair<int, int> top = path.front();
            path.pop();
            if(top.first==final_to_be_reached){
                return top.second;
            }
            
            visited[top.first] = true;
            int curr_pos;
            for(int dice=1;dice<=6;dice++){
                curr_pos = top.first + dice;
                
                int board_val = board_value(board, curr_pos, n, m);
                if(board_val != -1){
                    temp_pos = board_val;
                }else{
                    temp_pos = curr_pos;
                }
                
                if(visited[temp_pos]){
                    continue;
                }
                path.push({temp_pos, top.second+1});
                // cout << top.first <<  " ---> " << temp_pos << endl;
            }
        }
        
        return -1;
    }
    
    pair<int,int> board_position(int i, int n, int m){
        int tot = n*m;
        if(i > tot){
            return {-1,-1};
        }
        
        int row = (n-1) - ((i-1)/n);
        int col = ((i-1)/n)%2==0?(i-1)%m:(m-1)-(i-1)%m;
        return {row, col};
    }
    
    int board_value(vector<vector<int>>& board, int i, int n, int m){
        pair<int,int> pos = board_position(i, n, m);
        if(pos.first!=-1 && pos.second!=-1){
            return board[pos.first][pos.second];
        }
        
        return -1;
    }
};
