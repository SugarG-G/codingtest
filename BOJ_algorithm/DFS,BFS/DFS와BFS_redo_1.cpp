#include <bits/stdc++.h>

using namespace std;

void dfs(int &v, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &dfs_answer){
    for(int i = 0; i < graph[v].size(); i++){
        if(!visited[graph[v][i]]){
            visited[graph[v][i]] = true;
            dfs_answer.emplace_back(graph[v][i]);
            dfs(graph[v][i], graph, visited, dfs_answer);
        }
    }
}

int main(){
    int n, m, v;
    freopen("input.txt", "r", stdin);
    cin >> n >> m >> v;

    vector<vector<int>> graph(n+1);
    vector<bool> visited_dfs(n+1, false);
    vector<int> dfs_answer;

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

    dfs_answer.push_back(v);

    dfs(v, graph, visited_dfs, dfs_answer);

    for(auto a : dfs_answer){
        cout << a << " ";
    }
}