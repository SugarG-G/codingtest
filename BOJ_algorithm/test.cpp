#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){
    int t = 0;
    int h = 0, w = 0, n = 0;
    cin >> t;

    int array[h][w];
    vector<int> h1;
    vector<int> w1;
    vector<int> n1;

    for(int i = 0; i < t; i++){
        cin >> h >> w >> n;
        h1.push_back(h);
        w1.push_back(w);
        n1.push_back(n);
    }

    for(int i_t = 0; i_t < t; i_t++){
        for(int i = 0; i < h1[i_t]; i++){
            for(int j = 0; j < w1[i_t]; j++){
                array[i][j] = (i+1)*100 + j+1;
            }
        }

        int k = 0, q = 0;
        for(int i = 0; i < n1[i_t]; i++){
            // cout << array[k - 1][q];
            if(k >= h1[i_t]){
                q++;
                k = 0;
            }
            k++;    
        }

        cout << array[k - 1][q] << '\n';
    }
    
    // while(c < n){
    //     if(k >= h){
    //         q++;
    //         k = 0;
    //     }
    //     // cout << array[k][q] << " ";
    //     c++;
    //     k++;
    // }

    // for(int i = 0; i < h; i++){
    //     for(int j = 0; j < w; j++){
    //         printf("%d ", array[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("%d ", array[3][1]);
    /*
        //n = 1
        array[0][0]
        //n = 2
        array[1][0]
        //n = 3
        array[2][0]
        //n = 4
        array[3][0]
        //n = 5
        array[4][0]
    */
}