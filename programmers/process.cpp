#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location){
    int answer = 0;

    priority_queue<int> pq;
    queue<pair<int, int>> q;

    for(int i = 0; i < priorities.size(); i++){
        q.push({i,priorities[i]});
        pq.push(priorities[i]);
    }

    // while(!q.empty()){
    //     cout << q.front().first << " " << q.front().second << endl;
    //     q.pop();
    // }
    int cnt = 1;
    while(1){
        pair<int, int>qFront = q.front();
        q.pop();

        if(qFront.second == pq.top()){
            if(qFront.first == location){
                answer = cnt;
                break;
            }
            else{
                cnt++;
                pq.pop();                
            }
        }
        else if(qFront.second != pq.top()){
            q.push({qFront.first, qFront.second});
        }

    }


    // while(!q.empty()){
    //     int temp = q.front();
    //     q.pop();
    //     if(q.front() > temp){
            
    //     }
    //     cout << q.front() << " ";
    //     q.pop();
        
    // }


    // for(int i = 0; i < priorities.size(); i++){
    //     if(priorities[i] != max){
    //         priorities.push_back(priorities[i]);
    //     }
    //     else{
    //         priorities.pop_back();
    //     }
    //     cout << priorities[i];
    // }

    // while(!priorities.empty()){
    //     max = *max_element(priorities.begin(), priorities.end());

    //     if(priorities.front() < max){
    //         priorities.push_back(priorities.front());
    //         ch.push_back(ch.front());
    //         ch.erase(ch.begin());
    //         priorities.erase(priorities.begin());
    //     }
    // }



    return answer;
}

int main(){
    vector<int> pri {1, 1, 9, 1, 1, 1};
    cout << solution(pri, 5);
}