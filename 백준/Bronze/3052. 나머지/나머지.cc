#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int a;
    int result[10] = {0,};
    int temp[1000] = {0,};
    int count = 0;


    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        result[i] = a % 42;
    }

    //for (int i = 0; i < 10; i++)
    //{
    //    cout << result[i] << " ";
    //}
    //cout << '\n';

    for (int i = 0; i < 10; i++)
    {
        temp[result[i]]++;
    }
    
    for(int i = 0; i < size(temp); i++){
        if(temp[i] != 0){
            count++;
        }
    }
    cout << count;
}