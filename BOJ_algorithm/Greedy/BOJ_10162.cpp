#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 0;
    int t2, t3, t4, t5;
    int flag = 0;
    int button_time[3] ={300, 60, 10};
    int result = 0;
    int a_cnt = 0, b_cnt = 0, c_cnt = 0;
    cin >> t;

    while(t >= 0){
        if(t - 300 >= 0){
            t = t - 300;
            a_cnt++;
        }
        else if(t - 60 >= 0){
            t = t - 60;
            b_cnt++;
        }
        else if(t - 10 >= 0){
            t = t - 10;
            c_cnt++;
        }
        else {
            break;
        }
    }
    if(t%10 < 10 && t != 0){
        cout << -1;
    }else{
        cout << a_cnt << " "<< b_cnt << " " << c_cnt << endl;
    }
    // if(t/10 < 10){
    //     cout << -1;
    // }
    // else{
    //     cout << a_cnt << " "<< b_cnt << " " << c_cnt << endl << t;
    // }

    return 0;
}