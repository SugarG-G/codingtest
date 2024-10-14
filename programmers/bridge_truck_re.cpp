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
    queue<int> q;

    while(1){
        if(q.size() < bridge_length & sum < weight){
            q.push(truck_weights[truck_idx]);
            cnt++;
            sum += truck_weights[truck_idx];
            truck_idx++;
        }
        break;
        
    }

    return answer;
}

int main(){
    cout << solution(2, 10, {7,4,5,6});
}