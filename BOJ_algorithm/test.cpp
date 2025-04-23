#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    string str = "";
    char str2[1000] = {0,};

    while(str != "0"){
        cin >> str;
        for(int i = 0; i < str.size() - 1; i++){
            str2[i] = str[(str.size() - 1) - i];
        }
    }
    cout << str2;
}