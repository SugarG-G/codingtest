#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    int A = 0, B = 0;
    
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> B;
        cout << A+B << "\n";
    }

}