#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp(string &a, string &b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    int cnt;


    for(int i = 0; i < numbers.size(); i++){
        temp.push_back(to_string(numbers[i]));
    }

    // cout << temp[0] << " " << temp[1] << " " << temp[2] << endl;

    sort(temp.begin(), temp.end(), cmp);

    // for(int i = 0; i < temp.size(); i++){
    //     cout << temp[i] << " ";
    // }

    for(int i = 0; i < temp.size(); i++){
        answer += temp[i];
    }

    if(answer[0] == '0'){
        answer = "0";
    }

    // cout << answer;

    return answer;
}

int main(){
    // solution({6,10,2});
    // solution({3,30,34,5,9});
    // solution({8,0,0,0,0});
}