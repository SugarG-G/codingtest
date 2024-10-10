#include "iostream"
#include <queue>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for(int i=0; i<progresses.size(); i++){
        if((100 - progresses[i]) % speeds[i] != 0){
            q.push((100 - progresses[i]) / speeds[i] + 1);
        }
        else q.push((100 - progresses[i]) / speeds[i]);
    }
    int count = 1;
    int day = 0;
    // int day = q.front(), count = 1;
    // q.pop();
    
    while(!q.empty()){
        int curDay = q.front();
        q.pop();
        if(q.empty()){
            break;
        }
        if(curDay >= q.front())
            count++;
        else {
            answer.push_back(count);
            count = 1;
            // day = curDay;
        }
    }
    answer.push_back(count);

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }

    return answer;
}

int main(){
    // vector<int>progresses {93, 30, 55};
    // vector<int>speeds {1, 30, 5};

    vector<int>progresses2 {95, 90, 99, 99, 80, 99};
    vector<int>speeds2 {1, 1, 1, 1, 1, 1};

    // solution(progresses, speeds);
    cout << endl;
    solution(progresses2, speeds2);
}