#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> gear;
    vector<int> ascending {1,2,3,4,5,6,7,8};
    vector<int> descending {8,7,6,5,4,3,2,1};

    int g;
    freopen("intput.txt", "r", stdin);
    
    for(int i = 0; i < 9; i++){
        cin >> g;
        gear.emplace_back(g);
    }

    for(int i = 0; i < gear.size(); i++){
        if(ascending[i] == gear[i]){
            cout << "ascending";
        }
        else if(descending[i] == gear[i]){
            cout << "descending";
        }
        else{
            cout << "mixed";
        }
    }

    return 0;
}