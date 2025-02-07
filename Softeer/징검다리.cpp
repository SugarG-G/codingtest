#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    freopen("input.txt", "r", stdin);
	int n, max_d = 0;
	cin >> n ;
	int d[n];
	int seq[n];
	for(int i = 0; i < n ;i ++){
		cin >> seq[i];
	}
	for(int i = 0 ; i < n ; i++){
		d[i] = 1;
		for(int j = 0 ; j < i ; j ++){
			if(seq[j] < seq[i]){
				d[i] = max(d[i], d[j] + 1);
			}
		}
		max_d = max(max_d, d[i]);
	}
	cout << max_d;
	
	return 0;
}