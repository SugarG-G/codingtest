#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define max 10

int n,e;
int graph[max][max];
bool visited[max];

void dfs(int node){
    visited[node] = true;

    cout << node << " ";

    for(int next = 0; next < n; ++next){
        if(!visited[next] && graph[node][next]){
            dfs(next);
        }
    }
}

int solution(vector<int> numbers, int target) {
    int answer = 0;



    return answer;
}

int main(){
    solution({1,1,1,1,1},3);
    // solution({4,1,2,1},4);
}