#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location){
    int answer = 0;
    int cnt = 0;
    
    queue<pair<char, int>>q;
    priority_queue<int> pq;


    for(int i = 0; i < priorities.size(); i++){
        q.emplace(i+'a', priorities[i]);
        pq.push(priorities[i]);
    }

    // while(!q.empty()){
    //     cout << q.front().first << q.front().second << " ";
    //     q.pop();
    // }
    // cout << endl;
    // while(!pq.empty()){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    while(1){
        pair p = q.front();
        q.pop();

        if(p.second == pq.top()){
            if(location+'a' == p.first){
                answer = cnt;
                break;
            }
            else{
                cnt++;
                pq.pop();
            }
        }
        else if(p.second != pq.top()){
            q.emplace(p.first, p.second);
        }
    }

    return answer;
}

int main(){
    cout << solution({1, 1, 9, 1, 1, 1}, 0);
}