// Number of Provinces
// BFS 
class Solution {
public:
    void bfs(int node, vector<int> adjLs[], vector<bool>& visit) {
        queue<int> q;
        q.push(node);
        visit[node] = true;

        while (!q.empty()) {
            node = q.front();
            q.pop();
            for(auto it: adjLs[node]){
                if(!visit[it]){
                    visit[it]=1;
                    q.push(it);
                }
            }
            
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int numberOfComponents = 0;
        vector<bool> visit(n);

        vector<int> adjLs[n]; 
        
        // to change adjacency matrix to list 
        for(int i = 0;i<n;i++) {
            for(int j = 0;j<n;j++) {
                // self nodes are not considered
                if(isConnected[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j); 
                    adjLs[j].push_back(i); 
                }
            }
        } 

        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
                numberOfComponents++;
                bfs(i, adjLs, visit);
            }
        }

        return numberOfComponents;
    }
};

// DFS

class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& visit) {
        visit[node] = true;
        for (int i = 0; i < isConnected.size(); i++) {
            if (isConnected[node][i] && !visit[i]) {
                dfs(i, isConnected, visit);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int numberOfComponents = 0;
        vector<bool> visit(n);

        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
                numberOfComponents++;
                dfs(i, isConnected, visit);
            }
        }

        return numberOfComponents;
    }
};


class Solution {
public:
    void dfs(vector<vector<pair<int, int>>>& adj, vector<bool>& visited, int& minChange, int currCity) {
        visited[currCity] = true;
        for (int i = 0; i < adj[currCity].size(); i++) {
            int neighbourCity = adj[currCity][i].first;
            int direction = adj[currCity][i].second;

            if (!visited[neighbourCity]) {
                if (direction == 1)
                    minChange++;
                dfs(adj, visited, minChange, neighbourCity);
            }
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 0; i < connections.size(); i++) {
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back({v, 1}); // city away from 0
            adj[v].push_back({u, -1}); // city toward 0
        }
        vector<bool> visited(n, false);
        int minChange = 0;
        dfs(adj, visited, minChange, 0);
        return minChange;
    }
};



// // Keys and Room
// // Recursive

// #include<vector>

// class Solution{
//     public:
//         void dfs(std::vector<std::vector<int>>& graph, int s, std::vector<bool> &vis){
//             vis[s]=true;
//             for(int i=0;i<graph[s].size();i++){
//                 if(!vis[graph[s][i]]){
//                     dfs(graph,graph[s][i],vis);
//                 }
//             }
//         }

//         bool canVisitAllRooms(std::vector<std::vector<int>>& rooms){
//             int i, n=rooms.size();
//             std::vector<bool> vis(n,false);
//             dfs(rooms,0,vis);
//             for(int i=0;i<n;i++){
//                 if(!vis[i]){
//                     return false;
//                 }
//             }
//             return true;
//         }
// };

// // Iterative 
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         stack<int> dfs; dfs.push(0);
//         unordered_set<int> seen = {0};
//         while (!dfs.empty()) {
//             int i = dfs.top(); dfs.pop();
//             for (int j : rooms[i])
//                 if (seen.count(j) == 0) {
//                     dfs.push(j);
//                     seen.insert(j);
//                     if (rooms.size() == seen.size()) return true;
//                 }
//         }
//         return rooms.size() == seen.size();
//     }


