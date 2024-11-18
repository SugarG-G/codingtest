#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<int> temp;
    

    for(int i = 0; i < number.size(); i++){
        temp.push_back(int(number[i]) - '0');
    }
    vector<bool> visited (temp.size(), true);
    for(int i = 0; i < number.size() - k; i++){
        visited[i] = false;
    }
    
    // for(int i = 0; i < temp.size(); i++){
    //     cout << temp[i] << " ";
    // }
    do{
        string s = "";
        for(int i = 0; i < number.size(); i++){
            if(visited[i]){
                // cout << number[i] << " ";
                s += number[i];
                
            }
        }
        temp.push_back(stoi(s));
        // cout << endl;
    }
    while(prev_permutation(visited.begin(), visited.end()));

    for(int &a : temp){
        cout << a << " ";
    }

    return answer;
}

int main(){
    solution("1924",2);
    // solution("1231234",3);
    // solution("4177252841",4);
}