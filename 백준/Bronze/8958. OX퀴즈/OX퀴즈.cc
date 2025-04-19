#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    int n, result;
    int count = 0;
    string str;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        //1 2 0 0 1 0 0 1 2 3
        //O O X X O X X O O O
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'O'){
                result += ++count;
            }
            else if(str[i] == 'X'){
                count = 0;
            }
        }
        cout << result << " ";
        result = 0;
        count = 0;
    }
}