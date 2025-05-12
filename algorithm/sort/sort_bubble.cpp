#include <algorithm>
#include <vector>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


void print_vector(vector<int> &v){
    int *vp = &v[0];

    for(int i = 0; i < v.size(); i++){
        cout << *(vp++) << " ";
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(vector<int> &v){
    int *vp = &v[0];
    
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < i; j++){
            if(*(vp + i) < *(vp + j)){
                swap(*(vp + i), *(vp + j));
            }
        }
    }
}

int main(){
    vector<int> v = {30, 2, 61, 23, 31, 50, 45};

    bubble_sort(v);
    print_vector(v);
}