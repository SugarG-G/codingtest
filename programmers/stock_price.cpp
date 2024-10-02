#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    queue<int> q;
    queue<int> k;
    int cnt = 0;
    // while(1){
    // for(int i = 0; i < prices.size(); i++){
    //     q.emplace(prices[i]);
    //     k.emplace(prices[i]);
    // }
    // while(!q.empty()){
    //     cnt = 0;
    //     int first = q.front();
    //     for(int i = 0; i < prices.size(); i++){
    //         if(first < q.front()){
    //             cnt++;
    //         }
    //         else{
    //             cnt = 1;
    //         }
    //         q.pop();
    //     }
    //     answer.push_back(cnt);
    // }
    // }
    // k.pop();
    // while(!q.empty()){
    //     cnt = 0;
    //     for(int i = 0; i < k.size(); i++){
    //         if(q.front() < k.front()){
    //             cnt++;
    //         }
    //         else{
    //             if(q.front() > k.front()){
    //                 cnt = 1;
    //             }                    
    //             break;
    //         }
    //     }
    //     q.pop();
    //     k.pop();
    //     answer.push_back(cnt);
    // }

    for(int i = 0; i < prices.size(); ++i){
        cnt = 0;
        for(int j = i+1; j < prices.size(); ++j){
            cnt++;
            if(prices[j] < prices[i]){
                break;
            }
        }
        answer.push_back(cnt);
    }


    return answer;
}

int main(){
    for(auto i : solution({4,3,2,1})){
        cout << i << " ";
    }
}

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for (int idx = 0; idx < prices.size(); ++idx){ // 하나씩 가져와서
        int chk = 0;
        for(int i = idx+1; i < prices.size(); ++i){
            chk++;
            if(prices[idx] > prices[i]) // 비교한다
                break;
        }
        answer.push_back(chk); // answer에 넣는다
    }
    return answer;
}

