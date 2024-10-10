#include "iostream"
#include "algorithm"
#include "vector"
#include "string"
#include "queue"

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> day;
    int cnt = 0;
    int cmp = 1;
    int temp = 0;
    // for(int i = 0; i < progresses.size(); i++){
    //     cout << progresses[i] << " " << speeds[i] << " ";
    // }

    for(int i = 0; i < progresses.size(); i++){
        
        while(progresses[i] < 100){
            progresses[i] += speeds[i];
            cnt++;
        }
        day.push(cnt);
        cout << cnt << "\n";
        cnt = 0;
    }
    
    temp = day.front();
    day.pop();

    while(!day.empty()){
        int curDay = day.front();
        day.pop();
        if(temp >= curDay)
            cmp++;
        else {
            answer.push_back(cmp);
            cmp = 1;
            temp = curDay;
        }
    }
    answer.push_back(cmp);

        //cout << day[i] << " ";

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