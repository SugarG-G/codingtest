#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int start_t = 0, end_t = 0;
    int result = 0, cnt = 1;
    vector<pair<int, int>> room_time;

    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> start_t >> end_t;
        room_time.push_back(make_pair(start_t, end_t));
    }

    sort(room_time.begin(), room_time.end());

    result = room_time[0].first;
    for (int i = 1; i < n; i++)
    {
        if (result <= room_time[i].second)
        {
            cnt++;
            result = room_time[i].first;
        }
    }
    cout << cnt;
    return 0;
}