#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands){
    vector<int> answer;
    vector<int> temp;
    // (array.begin() + commands[0][0] - 1, array.begin() + commands[0][1] - 1);

    // temp.push_back(vector<int>(array.begin() + (commands[0][0] - 1), array.begin() + commands[0][1] - 1));
    for(int i = 0; i < commands.size(); i++){
        for(int j = 0; j < 4; j++){
            commands[i][j] -= 1;
        }
    }


    for(int i = 0; i < commands.size(); i++){
        temp = vector<int>(array.begin() + commands[i][0], array.begin() + commands[i][1] + 1);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2]]);
    }

    return answer;
}

int main(){
    for(auto &a : solution({1, 5, 2, 6, 3, 7, 4}, {{2,5,3},{4,4,1},{1,7,3}})){
        cout << a;
    }
}