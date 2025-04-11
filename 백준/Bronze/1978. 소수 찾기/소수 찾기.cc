#include <iostream>
#include <vector>

using namespace std;

bool prime_number(int num){
    if(num > 1){
        for(int i = 2 ; i < num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
    else return false;
}

int main(){
    vector<int> v;
    int size_N = 0, N, count = 0;
    //freopen("input.txt", "r", stdin);
    cin >> size_N;
    for(int i = 0; i < size_N; i++){
        cin >> N;
        v.push_back(N);
    }
    

    for(auto k : v){
        if(prime_number(k)){
            // cout << k << " ";
            count++;
        }
    }
    // cout <<endl;
    cout << count;
}