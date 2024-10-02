#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = {1, 2, 3, 4, 5};
    vector<int> p2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int p1_cnt = 0, p2_cnt = 0, p3_cnt = 0;

    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == p1[i%5]) p1_cnt++;
        if(answers[i] == p2[i%8]) p2_cnt++;
        if(answers[i] == p3[i%10]) p3_cnt++;
    }

    int max_cnt = max(p1_cnt, p2_cnt);
    max_cnt = max(max_cnt,p3_cnt);

    if(max_cnt == p1_cnt) answer.push_back(1);
    if(max_cnt == p2_cnt) answer.push_back(2);
    if(max_cnt == p3_cnt) answer.push_back(3);

    return answer;
}