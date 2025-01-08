#include<iostream>
#include<vector>
using namespace std;
int n, m, S, T, n1, n2, ret;
int visited1[100001], visited2[100001], visited3[100001], visited4[100001];
vector<int> v1[100001], v2[100001];

void dfs(int s, int visited[], vector<int> v[]) {
	if (visited[s]) return;
	else visited[s] = 1;

	for (auto var : v[s]) {
		dfs(var, visited, v);
	}
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> n1 >> n2;
		v1[n1].push_back(n2);
		v2[n2].push_back(n1);
	}
	cin >> S >> T;

	visited1[T] = 1; visited2[S] = 1;

	dfs(S, visited1, v1);
	dfs(T, visited2, v1);

	dfs(S, visited3, v2);
	dfs(T, visited4, v2);

    int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visited1[i] and visited2[i] and visited3[i] and visited4[i]) cnt++;
	}
	cout << cnt - 2;
}