#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n= 0;
    long long sum = 0;
    int cnt = 0;

    // 200, 19
    cin >> n;

    // 1+2+....
    long long i = 1;
    while (1)
    {
        sum += i;
        cnt++;
        if(sum > n){
            cnt--;
            break;
        }
        i++;
    }

    cout << cnt;

    return 0;
}