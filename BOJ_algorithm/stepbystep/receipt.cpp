#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int X = 0, N = 0, a = 0, b = 0;
    int result = 0;
    cin >> X;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        result += (a*b);
    }

    if(X == result){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}