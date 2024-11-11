#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> info[200];
bool adj[201][201];
vector<bool> visited;

int dfs(int curr, const int n){
    if(visited[curr]) return 0;
    visited[curr] = true;

    int ret = 1;
    for(int next = 1 ; next <= n; next++){
        if(!adj[curr][next]) continue;

        ret += dfs(next, n);
    }
    return ret;
}

int solution(int n, vector<vector<int>> wires){
    int answer = 101;
    
    for(int i = 0; i < wires.size(); i++){
        int u = wires[i][0];
        int v = wires[i][1];

        adj[u][v] = adj[v][u] = true;
    }

    for(int i = 0; i < wires.size(); i++){
        int u = wires[i][0];
        int v = wires[i][1];
        adj[u][v] = adj[v][u] = false;

        vector<int> count;
        visited = vector<bool> (n+1, false);

        for(int j = 1; j <= n; j++){
            int temp = dfs(j, n);
            if(!temp) continue;
            count.push_back(temp);
        }
        answer = min(answer, abs(count[0] - count[1]));
        adj[u][v] = adj[v][u] = true;
    }

    return answer;
}

int main(){
    solution(9,{{1,3},{2,3},{3,4},{4,5},{4,6},{4,7},{7,8},{7,9}}); //3
    // solution(4,{{1,2},{2,3},{3,4}}); //0
    // solution(7,{{1,2},{2,7},{3,7},{3,4},{4,5},{6,7}}); //1
}