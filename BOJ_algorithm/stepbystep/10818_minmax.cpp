#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    vector<int> arr;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp = 0;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << *min_element(arr.begin(), arr.end()) << " " << *max_element(arr.begin(), arr.end());
}