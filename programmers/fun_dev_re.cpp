#include "iostream"
#include "algorithm"
#include "vector"
#include "string"
#include "deque"

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    deque<int> day;
    int cnt = 0;
    int day_cnt = 0;
    // for(int i = 0; i < progresses.size(); i++){
    //     cout << progresses[i] << " " << speeds[i] << " ";
    // }

    for(int i = 0; i < progresses.size(); i++){
        
        while(progresses[i] != 100){
            progresses[i] += speeds[i];
            cnt++;
            if(progresses[i] > 100){
                break;
            }
        }
        day.push_back(cnt);
        //cout << cnt << "\n";
        cnt = 0;
    }

    for(int i = 0; i < day.size(); i++){
        int temp = 0;
        
        //cout << day[i] << " ";
        temp = day.front();
        day_cnt++;
        day.pop_front();

        while(!day.empty()){
            if(temp > day.front()){
                day_cnt++;
                cout << day_cnt << " ";
            }
            else{
                day_cnt = 0;
            }
            day.pop_front();
        }
    }

    return answer;
}

int main(){
    vector<int>progresses {93, 30, 55};
    vector<int>speeds {1, 30, 5};

    vector<int>progresses2 {95, 90, 99, 99, 80, 99};
    vector<int>speeds2 {1, 1, 1, 1, 1, 1};

    solution(progresses, speeds);
    cout << endl;
    solution(progresses2, speeds2);
}