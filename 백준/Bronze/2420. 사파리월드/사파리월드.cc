#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    long long n, m;
    long long result = 0;

    cin >> n >> m;
    result = (n - m) < 0 ? -(n - m) : (n -m);
    cout << result;
}