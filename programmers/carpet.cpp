#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow){
    vector<int> answer;

    int area = brown + yellow;

    for(int height = 3 ; height <= sqrt(area) ; height++){
        if(area % height == 0){
            int width = area / height;

            if((width - 2) * (height - 2) == yellow){
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}

int main(){
    auto t = solution(10,2);
    cout << t[0] << " " << t[1];
}