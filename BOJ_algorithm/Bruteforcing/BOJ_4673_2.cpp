#include <stdio.h>

int d(int n)
{
    int front = 0;
    int back = 0;
    int result = 0;
    
    while(n) //33
    {
        front = n / 10;
        back = n % 10;
        result = n + front + back;
    }

}

int main(){
    
}