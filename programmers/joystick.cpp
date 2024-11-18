#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int solution(string name) {
    int answer = 0;
    int len = name.size();
    int minMove = name.size() - 1;
    // 25
    cout << name.size() << endl;
    for(int i = 0; i < name.size(); i++){
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
        int cursor = i + 1;
        while(cursor < name.size() && name[cursor] == 'A') cursor++;
        minMove = min( minMove, min( i + i + (len - cursor), i+(len - cursor)+(len - cursor)));
    }

    return answer + minMove;
}

int main(){
    // cout << solution("JEROEN") << endl;
    // cout << solution("JAN") << endl;
    // cout << solution("JAZ") << endl;
    cout << solution("ABBAAAAAAAAAABA") << endl;
}
// ABBAAAAAAAAAABA
// AABAAAAAABB