#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, i = 0;
    
    sort(people.begin(), people.end());

    while(people.size() > i){
        if(people[i] + people.back() <= limit) {
            answer++;
            i++;
            people.pop_back();
        }
        else {
            answer++;
            people.pop_back();
        }

    }
    return answer;
}

int main(){
    // cout << solution({70,50,80,50}, 100); //80 70 50 50
    // solution({70,80,50}, 100);
    cout << solution({80, 70, 60, 50, 50, 40, 40},130); //80 70 60 50 50 40 40
    // solution({40,40,40,50,50,60,70},130); //70 60 50 50 40 40 40
}