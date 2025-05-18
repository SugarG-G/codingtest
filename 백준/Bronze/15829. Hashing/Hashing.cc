#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);

    int L;
    long long m = 1234567891;
    long long r = 31, R = 1;
    long long hash_value = 0;
    string str;

    cin >> L;
    cin >> str;
    // cout << (str[3] - 'a' + 1) << '\n';
    for(int i = 0; i < L; i++){
        hash_value += ((str[i] - 'a' + 1) * R) % m;
        hash_value %= m;
        R = (R * r) % m;
    }
    cout << hash_value;

    
    return 0;
}