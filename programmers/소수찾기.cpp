#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool Eratos(int n){
    if(n < 2) return false;
    
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    
    return Eratos;
}

int solution(string numbers) {
    int answer = 0;
    
    vector<char> v;
    vector<int> n;

    for(int i = 0; i < numbers.size(); i++){
        v.push_back(numbers[i]);
    }

    sort(v.begin(), v.end());

    do{
        string str = "";
        for(int i = 0; i < v.size(); i++){
            str.push_back(v[i]);
            n.push_back(stoi(str));
        }
    }
    while(next_permutation(v.begin(), v.end()));

    sort(n.begin(), n.end());
    n.erase(unique(n.begin(), n.end()),n.end());

    for(int i = 0; i < n.size(); i++){
        if(Eratos(n[i])) answer++;
    }

    return answer;
}

int main(){
    cout << solution("121");
}