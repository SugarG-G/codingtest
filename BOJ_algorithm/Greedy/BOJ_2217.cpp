#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0;
    int input = 0;
    int result = 0;
    cin >> n;
    vector<int> rope;
    vector<int> temp;

    for(int i = 0; i < n; i++){
        cin >> input;
        rope.push_back(input);
    }

    sort(rope.rbegin(), rope.rend());

    for(int i = 0; i < rope.size(); i++){
        temp.push_back(rope[i] * (i+1));
    }

    // for(int i = 0; i < temp.size(); i++){
    //     cout << temp[i] << " ";
    // }
    result = *max_element(temp.begin(), temp.end());

    cout << result << endl;

    return 0;
}