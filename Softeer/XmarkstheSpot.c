#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    freopen("input.txt", "r", stdin);
    unsigned int N;
    scanf("%d", &N);
    char S[500000];
    char T[500000];
    
    for(unsigned int i = 0; i < N; i++){
        scanf("%s %s", &S, &T);
        
        for(unsigned int j = 0; j < N; j++){
            if(S[j] == 'X' || S[j] == 'x'){
                printf("%c", toupper(T[j]));
                // break;
            }
        }
    }
    
    return 0;
}