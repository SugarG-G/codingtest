#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> temp;
    vector<int> temp2;
    int sum = 0;

    sum = brown + yellow;

    for(int i = 1; i <= yellow; i++){
        if(yellow % i == 0){
            temp.push_back(i+2);
        }
    }
    int i = 0;
    int j = temp.size()-1;
    while(1){
        if(temp[i] * temp[j] == sum){
            answer.push_back(temp[j]);
            answer.push_back(temp[i]);
            break;
        }
        i++, j--;
    }

    return answer;
}
//18,6 ; 12,4 ; 26,10
int main(){
    // solution(24,24);
    // cout << endl;
    // solution(18,6);
    // solution(8,1);
    // cout << endl;
    solution(26,10);
    // for(int &a : solution(12,4)){
    //     cout << a << " ";
    // }
}