#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A = 0, B = 0;

    while(1){
        cin >> A >> B;
        
        if(A+B == 0){
            break;
        }
        cout << A+B << endl;
    }
}