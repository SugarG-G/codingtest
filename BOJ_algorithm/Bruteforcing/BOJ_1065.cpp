#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    vector<int> arr;
    int temp_100[3] = {
        0,
    };
    int check[2] = {
        0,
    };
    int cnt = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 100)
        {
            cnt++;
            continue;
        }
        else if (arr[i] < 1000)
        {
            temp_100[0] = (arr[i] % 1000) / 100;
            temp_100[1] = (arr[i] % 100) / 10;
            temp_100[2] = arr[i] % 10;

            check[0] = temp_100[0] - temp_100[1];
            check[1] = temp_100[1] - temp_100[2];

            if (check[0] == check[1])
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    // an = a1 +(n-1)d
    return 0;
}