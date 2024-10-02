#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int basket_n = 0, ball_m = 0, begin_basket_i = 0, end_basket_j = 0, ball_num_k = 0;

    cin >> basket_n >> ball_m;

    vector<int> basket(basket_n);

    for(int i = 0; i < ball_m; i++){
        cin >> begin_basket_i >> end_basket_j >> ball_num_k;

        for(int j = begin_basket_i - 1; j < end_basket_j; j++){
            basket[j] = ball_num_k;
        }
    }

    for(int i = 0; i < basket.size(); i++){
        cout << basket[i] << " ";
    }
}