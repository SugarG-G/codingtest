#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    string str = "";
    
    while(1){
        cin >> str;
        char str2[10001] = {0,};
        if(str == "0"){
            break;
        }
        for(int i = 0; i < str.size(); i++){
            str2[i] = str[(str.size() - 1) - i];
        }
        //cout << str2 << '\n';
        if(str.compare(str2) == 0){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
        
    }
}