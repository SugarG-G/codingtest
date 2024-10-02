#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map<string, int> sH;

    for(int i = 0; i < clothes.size(); i++){
        sH[clothes[i][1]]++;
    }
    
    // for(auto it = sH.begin(); it != sH.end(); it++){
    //     cout << it -> first << " " << it -> second << endl;
    // }

    for(auto kvp : sH){
        answer *= kvp.second + 1;
    }
    answer -= 1;

    return answer;
}


int main() {

    vector<vector<string>> clothes;
    clothes = {
        {"yellow_hat", "headgear"}, 
        {"blue_sunglasses", "eyewear"},
        {"green_turban", "headgear"}
    };
    
    // for(int i = 0; i < clothes.size(); i++){
    //     cout << endl;
    //     for(int j = 0; j < clothes[i].size(); j++){
    //         cout << clothes[i][j] << " ";
    //     }
    // }
    cout << solution(clothes);

    return 0;
}
