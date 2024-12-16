#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    unsigned long long k, p, n, mod = 1000000007;
    freopen("input.txt", "r", stdin);
    cin >> k >> p >> n;
    // 1000000007
    for(int i = 0; i < n; i++){
        k = (k * p) % mod;
    }
    cout << k;


    return 0;
}