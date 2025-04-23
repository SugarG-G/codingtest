#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    string str;
    cin >> str;
    // A = 65
    // F = 70
    //A:4 B:3 C:2 D:1 F: 0.0
    //+: 0.3  0: 0.0 -: 0.7
    double result = 0;
    for(int i = 0; i < 4; i++){
        if(str[0] == 'A' + i){
            result = 4.0 - i;
        }
        else if(str[0] == 'F'){
            result = 0.0;
        }
    }

    if(str[1] == '+'){
        result += 0.3;
    }
    else if(str[1] == '0'){
        result += 0.0;
    }
    else if(str[1] == '-'){
        result -= 0.3;
    }

    printf("%.1lf",result);
    
}