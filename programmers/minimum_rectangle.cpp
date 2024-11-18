#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int temp = 0;
    vector<int> f;
    vector<int> s;

    for(auto &a : sizes){        
        if(a[0] < a[1]){
            temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        // cout << a[0] << " " << a[1] << " ";
    }

    for(auto &b : sizes){
        f.push_back(b[0]);
        s.push_back(b[1]);
    }
    
    return answer = *max_element(f.begin(), f.end()) * *max_element(s.begin(), s.end());
}

int main(){
    cout << solution({{60,50},{30,70},{60,30},{80,40}});
}