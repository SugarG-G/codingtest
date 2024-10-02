#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A = 0, B = 0;
    while(1){
        cin >> A >> B;
        if(cin.eof()) break;
        cout << A+B << endl;
    }
}