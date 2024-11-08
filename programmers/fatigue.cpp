// 모든 던전들 다 탐험하면서 가능한 던전수를 찾으면된다.
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int> t;
    int n = 0;
    int c = 0;
    
    c = k;
    sort(dungeons.begin(), dungeons.end());

    do{
        for(int i = 0 ; i < dungeons.size(); i++){
            if(k >= dungeons[i][0]){
                k -= dungeons[i][1];
                n++;
            }            
        }
        t.push_back(n);
        k = c;
        n = 0;
    }
    while(next_permutation(dungeons.begin(), dungeons.end()));

    answer = *max_element(t.begin(), t.end());
    
    return answer;
}

int main(){
    cout << solution(80,{{80,20},{50,40},{30,10}});
}