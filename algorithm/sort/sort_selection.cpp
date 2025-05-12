#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_vector(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

void selection_sort(vector<int> &v){
    int temp;
    int min_index = 0;

    for(int i = 0; i < v.size(); i++){
        min_index = i;
        for(int j = i; j < v.size(); j++){
            if(v[j] < v[min_index]){
                min_index = j;
            }
        }
        swap(v[i], v[min_index]);
    }
}

int main(){
    vector<int> v = {3, 15, 19, 3, 205, 23, 51, 102};

    selection_sort(v);
    print_vector(v);
}