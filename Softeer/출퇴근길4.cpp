#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void dfs(int &now, const vector<vector<int>> &graph, vector<bool> &visit){
    if(visit[now] == 1){
        return;
    }
    visit[now] = 1;
    for(auto neighbor : graph[now]){
        dfs(neighbor, graph, visit);
    }
    return; 
}

int main(){
    freopen("input.txt", "r", stdin);
    int n, m, x, y, s, t;
    cin >> n >> m;
    
    vector<vector<int>> graph(n+1);
    vector<vector<int>> rev_graph(n+1);

    for(int i = 0; i < m; i++){
        cin >> x >> y;

        graph[x].emplace_back(y);
        rev_graph[y].emplace_back(x);
    }
    cin >> s >> t;

    /*
    cout << n << " " << m << endl;

    for(int i = 0; i < graph.size(); i++){
        cout << "{";
        for(int j = 0; j < graph[i].size(); j++){
            cout << graph[i][j] << " ";
        }
        cout << "}";
        cout << endl;
    }
    cout << s << " " << t;
    */
    vector<bool> fromS(n+1);
    fromS[t] = 1;
    dfs(s,graph,fromS);
    
    vector<bool> fromT(n+1);
    fromT[s] = 1;
    dfs(t,graph,fromT);

    vector<bool> toS(n+1);
    dfs(s,rev_graph,toS);

    vector<bool> toT(n+1);
    dfs(t,rev_graph,toT);

    int count = 0;

    for(int i = 1; i < n + 1; i++){
        if(fromS[i] && fromT[i] && toS[i] && toT[i]){
            count++;
        }
    }
    cout << count - 2;
}