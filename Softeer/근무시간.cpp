#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<pair<string,string>> week;
    string in, out;
    string h, m;
    int in_sum = 0, out_sum = 0;
    int sum = 0;
    freopen("input.txt", "r", stdin);

    // cin >> in >> out;
    for(int i = 0; i < 5; i++){
        cin >> in >> out;
        week.emplace_back(in,out);
    }

    for(int i = 0; i < week.size(); i++){
        h += week[i].first[0];
        h += week[i].first[1];
        m += week[i].first[3];
        m += week[i].first[4];
        in_sum = (stoi(h) * 60) + stoi(m);
        h = "", m = "";
        h += week[i].second[0];
        h += week[i].second[1];
        m += week[i].second[3];
        m += week[i].second[4];
        out_sum = (stoi(h) * 60) + stoi(m);
        h = "", m = "";
        
        sum += out_sum - in_sum;
    }

    cout << sum;

    return 0;  
}