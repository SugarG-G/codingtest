#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> basket;
    int n = 0, m = 0;
    int change_being = 0, change_end = 0;
    int temp = 0;
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        basket.push_back(i);
    }

    for(int i = 0; i < m; i++){
        cin >> change_being >> change_end;
        temp = basket[change_being - 1];
        basket[change_being - 1] = basket[change_end - 1];
        basket[change_end - 1] = temp;
    }

    for(int i = 0; i < basket.size(); i++){
        cout << basket[i] << " ";
    }

}