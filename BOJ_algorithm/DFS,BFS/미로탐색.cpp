#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

vector<vector<int>> graph(103);
vector<bool> visited(103);

void bfs(){

}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        graph[i].emplace_back(a);
    }


    bfs(1,1);
}