#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int result = 0;
    for(int i = 0 ; i < 5; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    for(int i = 0 ; i < 5; i++){
        result += v[i] * v[i];
    }

    result = result % 10;
    cout << result << endl;
    
    // for(auto k : v){
    //     cout << k << " ";
    // }
    // cout << endl;

}