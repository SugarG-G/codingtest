#include <bits/stdc++.h>


using namespace std;

int main(int argc, char** argv)
{
    
    int n, k, s, a, b;
    freopen("input.txt", "r", stdin);
    cin >> n >> k;
    vector<int> t(n+1, 0);
    for(int i = 1; i < n+1; i++){
        cin >> s;
        t[i] = s;
    }
    for(int i = 0; i < k; i++){
        vector<double> sum;
        double answer = 0.0;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            sum.emplace_back(t[j]);
        }
        cout << setprecision(2) << fixed;
        for(int i = 0; i < sum.size(); i++){
            answer += sum[i];
        }
        cout << answer / sum.size() << endl;
    }
    
    
    
    
    // for(int i = 1 ; i < t.size(); i++){
    //     cout << t[i] << " ";
    // }

    return 0;
}