#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> n;
    
    for(int i = 0; i < 9; i++){
        int temp = 0;
        cin >> temp;
        n.push_back(temp);
    }
    int element = *max_element(n.begin(), n.end());
    int index = max_element(n.begin(), n.end()) - n.begin();
    cout << element << "\n" << index+1;
}