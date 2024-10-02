#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n = 126;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            cout << i;
        }
    }

}