#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;
    for(auto comm : commands)
    {
        // cout << comm.at(0) << " " << comm.at(1) << " " << comm.at(2);
        // cout << endl; 
        v.assign(array.begin() + comm.at(0) - 1, array.begin() + comm.at(1));
        sort(v.begin(), v.end());
        answer.push_back(v.at(comm.at(2) - 1));
    }
    // for(auto t : v)
    //     cout << t << " ";
    // cout << endl;
    // for(auto c : array)
    //     cout << c << " ";
    return answer;
}