#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    // vector<int> gear;
    // vector<int> ascending {1,2,3,4,5,6,7,8};
    // vector<int> descending {8,7,6,5,4,3,2,1};
    string gear = "";
    string ascending = "12345678";
    string descending = "87654321";
    char g;
    freopen("input.txt", "r", stdin);
    
    for(int i = 0; i < 8; i++){
        cin >> g;
        gear += g;
    }

    if(gear == ascending){
        cout << "ascending";
    }
    else if(gear == descending){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }


    return 0;
}