#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speed){
    vector<int> answer;
    int comp = 0;

    // for(int i = 0; i < progresses.size(); i++){
    //     for(int j = speed[i]; j < speed.size(); speed[j]){

    //     }
    // }
    
    return answer;   
}


int main(){
    vector<int> pro {95, 90, 99, 99, 80, 99};
    vector<int> spe {1, 1, 1, 1, 1, 1};
    int cnt = 0, comp = 0;
    vector<int> days;
    vector<int> ans;
    queue<int> q;
    // for(int i = 0; i < 3; i++){
    //     cout << pro[i] << " " << spe[i] << endl;
    // }
        

    for(int i = 0; i < pro.size(); i++){
        while(pro[i] < 100){
            pro[i] += spe[i];
            cnt ++;
            // cout << pro[i] << " " << cnt << endl;
        }
        days.push_back(cnt);
        cnt = 0;
    }

    int maxDay = 0;

    for(int i=0;i<days.size();i++)
    {
        if(maxDay<days[i])
        {
            if(cnt!=0)
                ans.push_back(cnt);
            maxDay=days[i];
            cnt=1;
        }
        else
            cnt++;
    }
    if(cnt!=0)
        ans.push_back(cnt);


    // 5일, 10일, 1일, 1일, 20일, 1일 // 7 3 9
    // q.push(day[0]);

    // for(int i = 1; i < day.size(); i++){
    //     if(q.front() >= day[i]){
    //         q.push(day[i]);
    //     }
    //     else{
    //         ans.push_back(q.size());
    //         while(!q.empty()) q.pop();
    //         q.push(day[i]);
    //     }
    // }
    // if(!q.empty()) ans.push_back(q.size());

    cout << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    //cout << comp[0] << comp[1];
    // auto sol = solution(pro, spe);

    // cout << sol[0] << " " << sol[1];
    
}