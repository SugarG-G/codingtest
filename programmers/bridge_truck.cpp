#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    queue<pair<int, int>> bridge;
    int cur = 0;

    for(int i = 0; i < truck_weights.size(); i++){
        time++;
        if(time == bridge.front().second + bridge_length){
            cur -= bridge.front().first;
            bridge.pop();
        }
        while(cur + truck_weights[i] > weight){
            time = bridge.front().second + bridge_length;
            cur -= bridge.front().first;
            bridge.pop();
        }
        cur += truck_weights[i];
        bridge.emplace(truck_weights[i], time);
    }

    time = bridge.back().second + bridge_length;

    return time;
}

int main(){
    cout << solution(2,10,{7,4,5,6});
}