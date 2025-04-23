#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    string str;
    vector<int> temp(26,-1);

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        for(int j = 0; j <= 'z'-'a'; j++){
            if(str[i] == j + 'a'){
                if(temp[j] == -1){
                    temp[j] = i;
                }
            }
        }
    }

    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }

    // 97 1
    // 98 0
    // 99 -1
    // 100 -1
    // 
}