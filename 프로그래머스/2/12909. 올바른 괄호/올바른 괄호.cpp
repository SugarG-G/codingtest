#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>

using namespace std;

bool solution(string s)
{
    queue<int> q;
    int t;
    int cnt = 0;
    bool answer = true;

    for(int i = 0; i < s.size(); i++){
        q.push(s[i]);
    }

    while(!q.empty()){
        // cout << q.front() << " ";
        if(q.front() == '('){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt < 0){
            answer = false;
            break;
        }
        //cout << cnt << " ";
        q.pop();
    }
    if(cnt != 0){
        answer = false;
    }
    // cout << "cnt : " << cnt;
    // cout << endl;
    return answer;
}