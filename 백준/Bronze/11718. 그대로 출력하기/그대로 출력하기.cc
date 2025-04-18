#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    char str[101];

    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }
}