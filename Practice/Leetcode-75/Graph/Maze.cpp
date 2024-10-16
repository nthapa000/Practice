class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();
        queue<vector<int>> qu;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        vector<int> dx = {1, 0, -1, 0};
        vector<int> dy = {0, -1, 0, 1};
        qu.push(entrance);
        vis[entrance[0]][entrance[1]] = 1;
        int dist = 0;

        while (!qu.empty()) {
            int len = qu.size();
            dist++;
            for (int i = 0; i < len; i++) {
                vector<int> ind = qu.front();
                int x = ind[0];
                int y = ind[1];
                qu.pop();

                for (int j = 0; j < 4; j++) {
                    int xNew = x + dx[j];
                    int yNew = y + dy[j];

                    if (xNew >= 0 && xNew < m && yNew >= 0 && yNew < n && vis[xNew][yNew] == 0 && maze[xNew][yNew] == '.') {
                        vis[xNew][yNew] = 1;
                        qu.push({xNew, yNew});

                        if ((xNew == m-1 || xNew == 0 || yNew == n-1 || yNew == 0) && !(xNew == entrance[0] && yNew == entrance[1])) {
                            return dist;
                        }
                    }
                }
            }
        }

        return -1;  // If no exit is found.
    }
};


// class Solution {
// public:
//     int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
//         queue<pair<int,int>> q;
//         q.push({e[0],e[1]});
		
// 		//current moves
//         int moves=1;
//         int rows=maze.size();
//         int cols=maze[0].size();
        
// 		//to move in all directions
//         vector<vector<int>> offsets={{0,1},{1,0},{0,-1},{-1,0}};
		
//         //mark the entrance  as visited
//         maze[e[0]][e[1]]='+';
//         while(!q.empty())
//         {
//             int l=q.size();
// 			//for every node in the queue visit all of it's adjacent nodes which are not visited yet
//             for(int k=0;k<l;k++)
//             {
//                 auto [i,j]=q.front();
//                 q.pop();
                
// 				//try all 4 directions from the current cell
//                 for(int l=0;l<4;l++)
//                 {
//                     int x=i+offsets[l][0];
//                     int y=j+offsets[l][1];
// 					//a invalid move
//                     if(x<0 || y<0 || x>=rows || y>=cols || maze[x][y]=='+')
//                         continue;
// 					//if we have reached the exit then current moves are the min moves to reach the exit
//                     if(x==0 || y==0 || x==rows-1 || y==cols-1)
//                         return moves;
// 					//block the cell as we have visited
//                     maze[x][y]='+';
//                     q.push({x,y});
//                 }
//             }
// 			//increment the moves
//             moves++;
            
//         }
//         return -1;
//     }
// };