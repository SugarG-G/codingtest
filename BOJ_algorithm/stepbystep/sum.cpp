#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N = 0;
    int sum = 0;
    cin >> N;

    for(int i = 1; i <= N; i++){
        sum += i;
    }
    cout << sum << endl;
}