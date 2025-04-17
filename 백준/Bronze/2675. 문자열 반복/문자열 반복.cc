#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    
    int t = 0, r = 0;
    scanf("%d", &t);
    
    char str[20];
    char *ps = str;
    
    for(int i = 0; i < t; i++){
        scanf("%d", &r);
        scanf("%s", ps);
    
        for(int i = 0; i < strlen(ps); i++){
            for(int j = 0; j < r; j++){
                printf("%c", ps[i]);
            }
        }
        printf("\n");
    }


    // printf("%s", ps);
}