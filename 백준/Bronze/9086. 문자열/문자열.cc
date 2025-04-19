#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int t;
    string str;

    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> str;

        cout << str[0] << str[str.size()-1] << '\n';
    }
}