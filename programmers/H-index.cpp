#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b){
    return a > b;
}

int solution(vector<int> citations) {
    int answer = 0;
    int h = citations.size();

    sort(citations.begin(), citations.end(), cmp);

    // for(int &a : citations){
    //     cout << a << " ";
    // }
    // cout << endl;
    for(int i = 0; i < citations.size(); i++){
        if(citations[i] <= i + 1){
            return i;
            
        }
    }

    return h;
}

int main(){
    // cout << solution({3,0,6,1,5});
    cout << solution({5,5,5,5});
}