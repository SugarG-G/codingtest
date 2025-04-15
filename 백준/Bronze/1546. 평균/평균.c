#include <stdio.h>

double avr(double *v, int size){
    double result = 0;
    for(int i = 0; i < size; i++){
        result += v[i];
    }
    return result / size;
}

int main(){
    // freopen("input.txt", "r", stdin);
    double v[1001];
    double *pv = v;
    int n = 0, m, max = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        if(max < m){
            max = m;
        }
        v[i] = m;
    }
    // cout << max;

    // for(int i = 0; i < n; i++){
    //     printf("%.1lf ", v[i]);
    // }
    // cout << endl;
    for(int i = 0; i < n; i++){
        v[i] = (v[i] / max) * 100;
    }

    // for(int i = 0; i < n; i++){
    //     printf("%.1lf ", v[i]);
    // }
    
    printf("%lf", avr(v, n));
}