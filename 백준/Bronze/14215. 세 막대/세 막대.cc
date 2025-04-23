#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    int a;
    vector<int> v;
    int max = 0;

    for(int i = 0; i < 3; i++){   
        cin >> a;
        v.emplace_back(a);
    }
    
    sort(v.begin(), v.end());

#if 0
    for(int i = 0; i < 3; i++){
        cout << v[i] << " ";
    }
#endif

    if(v[0] + v[1] <= v[2]){
        v[2] = v[1] + v[0] - 1;
    }

    cout << v[2] + v[1] + v[0];


    //두 변의 합이 가장 긴 변의 합보다 크거나 같아야 한다.    
}