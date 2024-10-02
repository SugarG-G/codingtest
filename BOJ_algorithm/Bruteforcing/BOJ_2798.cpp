#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n = 0, m = 0;
    int card_arr[100] = {
        0,
    };
    int card_num = 0;
    int result = 0;
    int temp = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> card_arr[i];
    }

    // sort(card_arr.begin(), card_arr.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (card_arr[i] + card_arr[j] + card_arr[k] <= m && card_arr[i] + card_arr[j] + card_arr[k] > result)
                {
                    result = card_arr[i] + card_arr[j] + card_arr[k];
                }
            }
        }
    }
    cout << result << endl;

    return 0;
}