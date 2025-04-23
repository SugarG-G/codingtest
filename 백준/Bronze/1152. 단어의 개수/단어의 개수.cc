#include <iostream>

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);

    string str;
    int count = 0;

    getline(cin, str);

    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            count++;
        }
    }
    if(str[str.size() - 1] == ' '){
        count -= 1;
    }
    if(str[0] == ' '){
        count -= 1;
    }

    cout << count + 1;
}