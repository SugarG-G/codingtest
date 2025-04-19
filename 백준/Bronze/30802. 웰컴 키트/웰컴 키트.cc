#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int shirt_size[6] = {0,};
    int n;
    int t, p;
    int t_bundle = 0, p_bundle = 0, p_piece = 0;    

    cin >> n;

    for(int i = 0; i < 6; i++){
        cin >> shirt_size[i];
    }

    cin >> t >> p;
    /*
    shirt_size[0] = 3; // 1 T
    shirt_size[1] = 1; // 1 T
    shirt_size[2] = 4; // 1 T
    shirt_size[3] = 1; // 1 T
    shirt_size[4] = 5; // 1 T
    shirt_size[5] = 9; // 2 T
    // 1 + 1 + 1 + 1 + 1 + 2;
    */
    // t = 5, p = 7
    for(int i = 0; i < 6; i++){
        if(shirt_size[i] % t == 0){
            t_bundle += shirt_size[i] / t;
        }
        else if((shirt_size[i] / t == 0)){
            t_bundle += (shirt_size[i] / t) + 1;
        }
        else{
            t_bundle += (shirt_size[i] / t) + 1;
        }
    }
    cout << t_bundle << '\n';

    cout << n / p << " " << n % p;

    // for(int i = 0; i < 6; i++){
    //     cout << size[i] << " ";
    // }
    
}