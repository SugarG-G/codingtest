#include <iostream>
#include <algorithm>

using namespace std;
// long = 4byte(N)
int main(){
    int N = 0;
    cin >> N;
    if(N%4 == 0){
            for(int i = 0; i < N/4; i++){
            cout << "long ";
        }
    }
    cout << "int";
}