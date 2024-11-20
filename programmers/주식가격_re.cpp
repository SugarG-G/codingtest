#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    int cnt = 0;

    for(int i = 0; i < prices.size(); i++){
        for(int j = i+1; j < prices.size(); j++){
            if(prices[i] <= prices[j]){
                cnt++;
            }
            else{
                cnt++;
                break;
            }
        }
        answer.push_back(cnt);
        cnt = 0;
    }


    return answer;
}

int main(){
    for(auto a : solution({3, 5, 2, 6, 7, 8, 1, 10, 9})){
        cout << a << " ";
    }
}