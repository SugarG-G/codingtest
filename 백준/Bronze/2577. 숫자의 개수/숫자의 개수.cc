#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    
    int a, b, c;
    int result = 0;
    int count[10] = {0,};

    cin >> a >> b >> c;

    result = a * b * c;

    while(result != 0){
        count[result%10]++;
        result /= 10;
    }

    for(int i = 0; i < sizeof(count) / sizeof(int); i++){
        cout << count[i] << '\n';
    }
}