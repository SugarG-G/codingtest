#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    vector<int> t;
    string s = "";

    for(int i = 0; i < number.size(); i++){
        char temp = number[i];
        int cursor = 0;
        for(int j = 0; j <= k; j++){
            if(temp < number[j]){
                temp = number[j];
                cursor = j;
            }
        }
        answer += temp;
        k -= cursor;
        number.erase(0, cursor + 1);
    }


    return answer;
}

int main(){
    // cout << solution("1924",2);
    // solution("1231234",3);
    cout << solution("4177252841",4); //size = 6
}