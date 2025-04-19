#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int a = 0 , b = 0, c = 0;
    int num = 0, result = 0;
    string str;

    cin >> a >> b >> c;

    cout << (a + b) - c;
    cout << '\n';

    // 1000 + 1000 > 10001000
    
    str += to_string(a);
    str += to_string(b);
    num = stoi(str);
    cout << num - c;

    // cout << result - c;
}