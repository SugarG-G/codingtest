#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
    int T, A, B;
    cin >> T;
    for(int i = 0; i < T; i++){
        scanf("%d %d", &A, &B);
        printf("%d \r", A+B);
    }    
}