#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int cnt = 0;
    int truck_idx = 0;
    int sum = 0;
    int tmp = 0;
    queue<pair<int, int>> q;

    while(1){
        if(q.size() != bridge_length){
            if(sum + truck_weights[truck_idx] <= weight){
                q.emplace(truck_weights[truck_idx],truck_idx);
                sum += truck_weights[truck_idx];
                cnt++;
                truck_idx++;
            }
            else{
                q.emplace(0,0);
                cnt++;
            }
            
        }
        else if(q.size() == bridge_length){
            if(q.front().second == truck_weights.size()-1){
                cnt++;
                break;
            }
            sum -= q.front().first;
            q.pop();
        }
        
    }

    return answer = cnt;
}

int main(){
    // cout << solution(2, 10, {7,4,5,6});
    cout << solution(100, 100, {10});
}