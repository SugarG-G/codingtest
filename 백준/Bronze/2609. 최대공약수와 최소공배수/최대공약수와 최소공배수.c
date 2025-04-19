#include <stdio.h>

int main(){
    int a, b;
    int GCD = 0;
    int LCM = 0;

    scanf("%d %d", &a, &b);

    /*
    2 24 18
    3 12  9
    */
    int c, d;
    for(int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            GCD = i;
        }
    }
    LCM = (a*b) / GCD;
    //24 * 1, 24 * 2, 24 * 3, 24 * 4
    //18 * 1, 18 * 2, 18 * 3, 18 * 4

    printf("%d\n", GCD);
    printf("%d\n", LCM);
}
// 32 45
// 