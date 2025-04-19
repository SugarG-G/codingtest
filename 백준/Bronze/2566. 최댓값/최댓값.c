#include <stdio.h>

int main(){
    //freopen("input.txt", "r", stdin);
    int array[9][9];
    int max = -1;
    int max_row = 0, max_col = 0;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(max < array[i][j]){
                max = array[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("%d\n%d %d\n", max, max_row + 1, max_col + 1);
}