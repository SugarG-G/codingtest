#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){

    int hours = 0, min = 0, set_time = 0;

    cin >> hours >> min >> set_time;
    
    hours += set_time/60;
    min += set_time%60;

    if(min > 59){
        hours++;
        min -=60;
    }

    if(hours >23){
        hours -= 24;
    }

    cout << hours << " "<< min;

    return 0;
}