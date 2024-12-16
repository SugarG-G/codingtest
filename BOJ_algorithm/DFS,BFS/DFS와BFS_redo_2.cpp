#include <bits/stdc++.h>

using namespace std;

void dfs(int &v, vector<bool> &visited, vector<vector<int>> &graph, vector<int> &dfs_answer){
    for(int i = 0; i < graph[v].size(); i++){
        if(!visited[graph[v][i]]){
            visited[graph[v][i]] = true;
            dfs_answer.emplace_back(graph[v][i]);
            dfs(graph[v][i], visited, graph, dfs_answer);
        }
    }
}

void bfs(int &v, vector<bool> &visited, vector<vector<int>> &graph, vector<int> &bfs_answer, queue<int> &q){
    for(int i = 0; i < graph[v].size(); i++){
        if(!visited[graph[v][i]]){
            visited[graph[v][i]] = true;
            q.push(graph[v][i]);
            bfs_answer.emplace_back(graph[v][i]);
        }
        while(!q.empty()){
            int f = q.front();
            q.pop();
            bfs(f,visited,graph,bfs_answer,q);
        }
    }
}


int main(){
    int n, m, v;
    freopen("input.txt", "r", stdin);
    cin >> n >> m >> v;

    vector<vector<int>> graph(n+1);
    vector<bool> visited_dfs(n+1, false);
    vector<bool> visited_bfs(n+1, false);
    vector<int> dfs_answer;
    vector<int> bfs_answer;
    queue<int> q;

    for(int i = 0; i < m; i++){
        int n1, n2;
        cin >> n1 >> n2;

        graph[n1].emplace_back(n2);
        graph[n2].emplace_back(n1);
    }
    
    for(int i = 0; i < graph.size(); i++){
        sort(graph[i].begin(), graph[i].end());
    }

    visited_dfs[v] = true;
    visited_bfs[v] = true;

    dfs_answer.emplace_back(v);
    bfs_answer.emplace_back(v);

    dfs(v,visited_dfs,graph,dfs_answer);
    bfs(v,visited_bfs,graph,bfs_answer,q);

}