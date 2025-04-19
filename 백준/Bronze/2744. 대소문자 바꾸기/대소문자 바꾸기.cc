#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if('a' <= str[i] &&  str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        else if('A' <= str[i] && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }

    cout << str;
    
}