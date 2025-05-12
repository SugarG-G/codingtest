#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void quick_sort(vector<int> &v, int left, int right){
    int pL = left;
    int pR = right;
    int pivot = v[(pL + pR) / 2];
    do{
        while(v[pL] < pivot)  pL++;
        while(v[pR] > pivot)  pR--;
        
        if(pL <= pR){
            swap(v[pL], v[pR]);
            pL++;
            pR--;
        }
        
    }while(pL <= pR);

    if(left < pR){
        quick_sort(v, left, pR);
    }
    if(right > pL){
        quick_sort(v, pL, right);
    }
}

int main() {

    vector<int> v = {5, 3, 8, 4, 9, 1, 6, 2, 7};

    quick_sort(v, 0, v.size()-1);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}