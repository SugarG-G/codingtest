#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    int a, b, v;
    int result = 0;
    
    cin >> a >> b >> v;
    result = ((v - a) / (a - b)) + 1;
    if(((v - a) % (a - b)) != 0){
        result += 1;
    }
    if(a >= v){
        cout << "1";
    }
    else{
        cout << result;
    }
    
    // cout << '\n';
    // 6
}