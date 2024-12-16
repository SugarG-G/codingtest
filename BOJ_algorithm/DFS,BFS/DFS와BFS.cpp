#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int>> arr, vector<bool> &visited, vector<int> &dfs_answer){     
    for(int i = 0; i < arr[v].size(); i++){
        if(!visited[arr[v][i]]){
            visited[arr[v][i]] = true;
            dfs_answer.emplace_back(arr[v][i]);
            dfs(arr[v][i], arr, visited, dfs_answer);
        }
    }
}

void bfs(int v, vector<vector<int>> arr, vector<bool> &visited, vector<int> &bfs_answer, queue<int> &q){
    for(int i = 0; i < arr[v].size(); i++){
        if(!visited[arr[v][i]]){
            visited[arr[v][i]] = true;
            q.push(arr[v][i]);
            bfs_answer.emplace_back(arr[v][i]);
        }
    }
    while(!q.empty()){
        int next = q.front();
        q.pop();
        bfs(next, arr, visited, bfs_answer, q);
    }
}


int main(){
    int n, m, v;
    freopen("input.txt", "r", stdin);
    cin >> n >> m >> v;

    vector<vector<int>> arr(n+1);
    vector<bool> visited_dfs(n + 1, false);
    vector<bool> visited_bfs(n + 1, false);
    queue<int> q;
    vector<int> dfs_answer;
    vector<int> bfs_answer;

    for(int i = 0; i < m; i++){
        int n1, n2;
        cin >> n1 >> n2;

        arr[n1].emplace_back(n2);
        arr[n2].emplace_back(n1);
    }

    for(int i = 1; i < n + 1; i++){
        sort(arr[i].begin(), arr[i].end());
    }

    visited_bfs[v] = true;
    visited_dfs[v] = true;

    dfs_answer.emplace_back(v);
    bfs_answer.emplace_back(v);

    dfs(v, arr, visited_dfs, dfs_answer);
    bfs(v, arr, visited_bfs, bfs_answer, q);

    for(int i = 0; i < dfs_answer.size(); i++){
        cout << dfs_answer[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < bfs_answer.size(); i++){
        cout << bfs_answer[i] << " ";
    }

}