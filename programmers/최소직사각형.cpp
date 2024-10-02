#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int solution(vector<vector<int>> sizes) {
    int answer = 0;

    vector<int> m;
    vector<int> n;
    
    for(auto &t : sizes){
        if(t[0] < t[1]){
            auto temp = t[0];
            t[0] = t[1];
            t[1] = temp;       
        }
    }    
    for(auto b : sizes){
        m.push_back(b[0]);
        n.push_back(b[1]);
    }

    int m_max = *max_element(m.begin(), m.end());
    int n_max = *max_element(n.begin(), n.end());
    
    // for(auto &a : sizes){
    //     cout << a[0] << " " << a[1] << endl;
    // }
    // cout << "m_max : " << m_max << ", " << "n_max : " << n_max;

    return answer = m_max * n_max;
}

int main(){
    vector<vector <int>> sizes {{14,4}, 
                                {19,6},
                                {6,16},   
                                {18,7},
                                {7,11}};

    // for(int i = 0 ; i < sizes.size(); i++){
    //     for(int j = 0 ; j < sizes[i].size(); j++){
    //         cout << sizes[i][j] << " ";
    //     }
    // }
    cout << solution(sizes);
}

