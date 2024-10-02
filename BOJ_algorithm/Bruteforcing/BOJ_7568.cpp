#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int x = 0, y = 0;
    int n = 0;
    int k = 1;
    pair<int, int> v[50];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i].first < v[j].first && v[i].second < v[j].second){
                k++;
            }
        }
        cout << k << " ";
        k = 1;
    }

    // for(int i = 0; i < n; i++){
    //     cout << result[i] << " ";
    // }

    return 0;
}