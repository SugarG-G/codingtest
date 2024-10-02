#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int num = 0;
    int sum = 0;
    int part = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        sum = i;
        part = i;

        while (part)
        {
            sum += part % 10;
            part /= 10;
        }

        if (num == sum)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}