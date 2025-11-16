#include <iostream>
#include <bitset>

using namespace std;

int main(int* argc, char** argv)
{
    int n;
    cin >> n;

    cout << bitset<32>((~n + 1)^(n)).count();
}