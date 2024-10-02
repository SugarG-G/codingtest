#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n = 0, v = 0, s= 0;
    vector<int> arr;
    int count = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v;
        arr.push_back(v);   
    }
    /*for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }*/
    cin >> s;

    for(int j = 0; j < arr.size(); j++){
        if(s == arr[j]){
            count++;
        }
    }
    cout << count;
    
}