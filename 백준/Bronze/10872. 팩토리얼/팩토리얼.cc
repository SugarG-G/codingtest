#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    int n, result = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        result = result * (i + 1);
    }
    cout << result;
}