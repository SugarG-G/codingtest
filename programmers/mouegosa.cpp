#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> t1 {1,2,3,4,5};
    vector<int> t2 {2,1,2,3,2,4,2,5};
    vector<int> t3 {3,3,1,1,2,2,4,4,5,5};
    //              1,3,2,4,2,1,3,2,4,2
    int t1_c = 0, t2_c = 0, t3_c = 0;
    vector<int> t;
    int t_max = 0;


    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == t1[i % t1.size()]){
            t1_c++;
        }
        if(answers[i] == t2[i % t2.size()]){
            t2_c++;
        }
        if(answers[i] == t3[i % t3.size()]){
            t3_c++;
        }
    }

    t.emplace_back(t1_c);
    t.emplace_back(t2_c);
    t.emplace_back(t3_c);
    t_max = *max_element(t.begin(), t.end());

    for(int i = 0; i < t.size(); i++){
        if(t[i] == t_max){
            answer.push_back(i+1);
        }
    }

    return answer;
}

int main(){
    for(auto &sol : solution({1,2,3,4,5})){
        cout << sol << " ";
    }
}