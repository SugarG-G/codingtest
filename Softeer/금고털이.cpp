#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int main(int argc, char** argv){
    int w, n, m, p;
    vector<int> answer;
    freopen("input.txt", "r", stdin);
    cin >> w >> n;

    int sum = 0;

    vector<pair<int, int>> bag;
    for(int i = 0; i < n; i++){
        cin >> m >> p;
        bag.emplace_back(m, p);
    }

    sort(bag.begin(), bag.end(), cmp);

    for(int i = 0; i < bag.size(); i++){
        if(w - bag[i].first >= 0){
            w -= bag[i].first;
            sum += bag[i].first * bag[i].second;
        }
        else{
            sum += w * bag[i].second;
            break;
        }
    }
}