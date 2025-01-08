#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> forward_graph;
vector<vector<int>> reverse_graph;

vector<bool> S_T_visited, T_S_visited, S_to_S_visited, T_to_T_visited;

void dfs(int &now, vector<vector<int>> &graph, vector<bool> &visited){
    if (visited[now]) return;
    visited[now] = true;

    for(int i = 0; i < graph[now].size(); i++){
        dfs(graph[now][i], graph, visited);
    }
    return;
}

int main(int argc, char** argv)
{
    int n = 0, m = 0;
    int S = 0, T = 0;
    freopen("input.txt", "r", stdin);
    cin >> n >> m;

    forward_graph.resize(n+1);
    reverse_graph.resize(n+1);
    S_T_visited.resize(n+1);
    T_S_visited.resize(n+1);
    S_to_S_visited.resize(n+1);
    T_to_T_visited.resize(n+1);
    
    for(int i = 0; i < m; i++){
        int x = 0, y = 0;

        cin >> x >> y;

        forward_graph[x].emplace_back(y);
        reverse_graph[y].emplace_back(x);
    }

    cin >> S >> T;

    dfs(S, forward_graph, S_T_visited);
    dfs(T, forward_graph, T_S_visited);

    dfs(S, reverse_graph, S_to_S_visited);
    dfs(T, reverse_graph, T_to_T_visited);

    int res = 0;
    for(int i = 1; i <= n; i++){
        if (S_T_visited[i] && T_S_visited[i] && S_to_S_visited[i] && T_to_T_visited[i]) res++;
    }
    cout << res - 2;  // S와 T 자신을 제외하려면 -2

    return 0;
}