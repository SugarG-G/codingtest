#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>

using namespace std;

bool solution(string s){
    bool answer = true;
    queue<int> q;
    int cnt = 0;

    for(auto a : s){
        q.push(a);
    }
    // (())() 
    // )()(
    // (()(
        
    while(!q.empty()){
        cout << q.front() << " " ;
        if(q.front() == 40){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt < 0){
            answer = false;
            break;
        }
        q.pop();
    }
    if(cnt != 0){
        answer = false;
    }
    cout << "cnt : " << cnt;
    cout << endl;
    

    return answer;
}

int main(){
    cout << solution("(()(");
}