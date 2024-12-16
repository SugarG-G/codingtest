#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> gear;
    int g;
    freopen("intput.txt", "r", stdin);
    
    for(int i = 0; i < 9; i++){
        cin >> g;
        gear.emplace_back(g);
    }

    return 0;
}