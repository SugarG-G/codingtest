#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a;
    vector<int> v(3);
    //freopen("input.txt", "r", stdin);

    while(1){
        for(auto &a : v){
            cin >> a;
            a *= a;
        }
        if((v[0] == 0) && (v[1] == 0) && (v[2] == 0)) break;
        sort(v.begin(), v.end());
        if(v[0] + v[1] == v[2]) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}