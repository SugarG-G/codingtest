#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;
vector<vector<int>> graph(10002);
vector<bool> visited(1002);

vector<int> dfs_answer;
vector<int> bfs_answer;

void dfs(int &v){
    visited[v] = true;
    dfs_answer.emplace_back(v);

    for(int i = 0; i < graph[v].size(); i++){
        if(!visited[graph[v][i]]){
            dfs(graph[v][i]);
        }
    }
}

void bfs(int &v){
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        bfs_answer.emplace_back(f);

        for(int i = 0; i < graph[f].size(); i++){
            if(!visited[graph[f][i]]){
                q.push(graph[f][i]);
                visited[graph[f][i]] = true;
            }
        }
    }
}

int main(){
    int n, m, v;
    freopen("input.txt", "r", stdin);
    cin >> n >> m >> v;

    for(int i = 0; i < m; i++){
        int n1, n2;
        cin >> n1 >> n2;

        graph[n1].emplace_back(n2);
        graph[n2].emplace_back(n1);
    }

    for(int i = 0; i < graph.size(); i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    visited = vector<bool> (visited.size(), false);
    bfs(v);

    for(auto &df : dfs_answer){
        cout << df << " ";
    }
    cout << endl;
    for(auto &bf : bfs_answer){
        cout << bf << " ";
    }
}