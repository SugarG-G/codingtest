#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    char ascending[9] = "12345678";
    char descending[9] = "87654321";
    char str[9];


    for(int i = 0; i < 8; i++){
        cin >> str[i];
    }
    // cout << str << '\n';

    if(strcmp(str, ascending) == 0){
        cout << "ascending";
    }
    else if(strcmp(str, descending) == 0){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }
    // cout << strcmp(str,ascending);
    

    
}