#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){
    int t = 0;
    int h = 0, w = 0, n = 0;
    int x = 0, y = 0;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> h >> w >> n;

        y = n % h;
        x = n / h + 1;

        if(y == 0){
            y = h;
            x -= 1;
        }
        printf("%d%02d\n", y,x);
    }
    
}