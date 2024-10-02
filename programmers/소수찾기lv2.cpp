#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if (n < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


int solution(string numbers) {
    int answer = 0;
    
    vector<char> ch;
    vector<int> number;
    
    for(auto a : numbers){
        ch.push_back(a);
    }
    sort(ch.begin(), ch.end());
    
    do{
        string temp = "";
        for(int i = 0; i < ch.size(); i++){
            temp +=ch[i];
            auto it = find(number.begin(), number.end(), stoi(temp));
            if(it == number.end()){
                number.push_back(stoi(temp));
            }
        }
    }
    while(next_permutation(ch.begin(), ch.end()));
    sort(number.begin(), number.end());
    
    for(int i = 0; i < number.size(); i++){
        //cout << number[i] << endl;
        if(isPrime(number[i])){
            answer++;
        }
    }
    
    return answer;
}

int main(){
    string numbers = "17";
    cout << solution(numbers);
} 