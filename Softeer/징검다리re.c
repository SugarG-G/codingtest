#include <stdio.h>
#define MAX(X,Y) (X > Y ? X : Y)

int main(void)
{
    int N;
    int result = 0;
    scanf("%d", &N);
    
    int A[N];
    int dp[N];

    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);       
    }

    for(int i = 0; i < N; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(A[j] < A[i]){
                dp[i] = MAX(dp[i], dp[j] + 1);
            }
        }
        result = MAX(result, dp[i]);
    }

    printf("%d", result);
    
    return 0;
}