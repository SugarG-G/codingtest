#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(){
    int first = 0, second = 0, third = 0;
    int max = 0, same = 0;
    cin >> first >> second >> third;


    if((first != second) && (first != third) && (second != third)){
        if((first > second) && (first > third)){
            max = first;
        }
        else if((second > first) && (second > third)){
            max = second;
        }
        else if((third > first) && (third > second)){
            max = third;
        }

        cout << max*100;
    }
    else if((first == second) && (first == third) && (second == third)){
        cout << 10000 + (first * 1000);
    }
    else{
        if((first == second) || (first == third)){
            same = first;
        }
        else{
            same = second;
        }
        cout << 1000 + (same * 100);
    }
    return 0;
}