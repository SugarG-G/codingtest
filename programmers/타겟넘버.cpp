#include <string>
#include <vector>
#include <iostream> 

using namespace std;

int answer = 0;

void DFS(int idx, vector<int> numbers, int target, int value){   
    if(idx == numbers.size()){
        if(target == value) answer++;
        return;
    }

    DFS(idx + 1, numbers, target, value + numbers[idx]);
    DFS(idx + 1, numbers, target, value - numbers[idx]);
}

int solution(vector<int> numbers, int target) {
    DFS(0, numbers, target, 0);
    return answer;
}

int main(){
    cout << solution({1,1,1,1,1}, 3);
}