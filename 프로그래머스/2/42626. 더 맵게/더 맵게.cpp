#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int calcScoville = 0;
    int minScoville = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

    while(K > pq.top())
    {
        if(answer >= scoville.size() - 1) return -1;
        minScoville = pq.top();
        pq.pop();
        calcScoville = minScoville + (pq.top() * 2);
        pq.pop();
        pq.push(calcScoville);
        answer++;
    }
    
    return answer;
}