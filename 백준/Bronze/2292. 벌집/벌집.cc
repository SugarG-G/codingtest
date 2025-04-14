#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    // N = 13
    // 3개

    // N = 58
    // 5개

    // 1 floor > 1개
    // 2 floor > 6개
    // 3 floor > 12개
    // 4 floor > 18개
    // 5 floor > 24개
    /*
    1
    2 3 4 5 6 7
    8 9 10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29 30 31 32 33 35 36 37
    */

    /*
    1
    2 ~ 7       6
    8 ~ 19      12
    20 ~ 37     18
                24
                30
                36
    */

    //N이 몇층인지 알아야함.
    //각 층마다 6개의 칸씩 증가함
    // 13 > 3층 8과 19사이
    // 2와 7사이
    int floor_count = 1;
    int result = 1;
    //N 58
    
    int a = 0;
    while(N > result){
        result += 6*floor_count;
        floor_count++;
    }
    cout << floor_count;
}