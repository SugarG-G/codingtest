#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
//97 98 99 100 101 102 103 104 105 106 .... 122
//1 2 3 4 5 6 7 8 9 10

int pow(int a, int b){
    int result = 1;

    for(int i = 0; i < b; i++){
        result = result * a;
    }
    return result;
}

int main() {
    // freopen("input.txt", "r", stdin);

    int L, r = 31, M = 1234567891;
    int hash_value = 0;
    string str = "";
    // char *str = (char *)calloc(L, sizeof(char));
    cin >> L;
    cin >> str; 
    
    for(int i = 0; i < str.size(); i++){
        hash_value += ((str[i]) - 'a' + 1) * pow(r, i);
    }
    cout << hash_value % M;    

    // free(str);
    return 0;
}