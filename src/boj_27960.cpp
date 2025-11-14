#include <iostream>

using namespace std;

int solution(int &a, int &b)
{
    int answer = 0;
    int score[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    /* a
    55 - 32 = 13
    13 - 8 = 5
    5 - 4 = 1
    */

    /* b
    73 - 64 = 11
    11 - 8 = 3
    3 - 2 = 1
    1 + 2 + 8 + 64    
    */

    

    return answer;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << solution(a, b);
}