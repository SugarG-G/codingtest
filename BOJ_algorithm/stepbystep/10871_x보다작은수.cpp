#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n = 0, x = 0;
    vector<int> a;
    vector<int> result;

    cin >> n >> x;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for(int j = 0; j < a.size(); j++){
        if(x > a[j]){
            result.push_back(a[j]);
        }
    }

    for(int k = 0; k < result.size(); k++){
        cout << result[k] << " ";
    }

}