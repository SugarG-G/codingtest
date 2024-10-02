#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int T = 0;
    int A = 0, B = 0;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> A >> B;
        cout << "Case #"<< i << ": " << A << " + " << B << " = " << A+B << endl;
    }
}