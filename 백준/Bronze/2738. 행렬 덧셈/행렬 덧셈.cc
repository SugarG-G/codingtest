#include <stdio.h>

int main(void)
{
    // 3 3
    // 1 1 1
    // 2 2 2
    // 0 1 0
    // 3 3 3
    // 4 4 4
    // 5 5 100
	//freopen("input.txt", "r", stdin);

    int n, m;

    scanf("%d %d", &n, &m);
    int array1[n][m];
    int array2[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &array1[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &array2[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", array1[i][j] + array2[i][j]);
        }
        printf("\n");
    }

	return 0;
}