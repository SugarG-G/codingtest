#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    // vector<bool> temp (n+1,true);
    vector<int> t (n+1, 1);
    //1, 2, 3, 4, 5
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for(int &a : lost){
        t[a] -= 1;
    }

    for(int &b : reserve){
        t[b] += 1;

    }

    for(int i = 1; i < t.size(); i++){
        if(t[i] == 2 && t[i] > t[i-1] && t[i-1] == 0){
            t[i-1] += 1;
            t[i] -= 1;
        }
        else if(t[i] == 2 && t[i] > t[i+1] && t[i+1] == 0){
                t[i+1] += 1;
                t[i] -= 1;
        }
    }

    for(int &c : t){
        if(c >= 1){
            answer++;
        }
    }


    return answer-1;
}

int main(){
    // cout << solution(5,{2,4},{1,3,5});
    // cout << solution(5,{2,4},{3});
    // cout << solution(3,{3},{1});
    // cout << solution(5,{2,3},{3,4});    //1, , 3, 4, 5
    cout << solution(5,{4,2},{3,5});
    // cout << solution(5,{4,5},{3,4});
}