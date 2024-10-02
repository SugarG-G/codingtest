#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int cnt = 0;
    int result = 0;
    // 5 , 3
    cin >> n;

    while (n > 0)
    {
        if (n % 5 == 0)
        {
            result += n / 5;
            break;
        }
        n -= 3;
        result++;
    }
    if(n < 0){
        cout << -1;
    }else cout << result;
    return 0;
}