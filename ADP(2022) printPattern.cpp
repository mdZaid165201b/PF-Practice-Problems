
#include <iostream>
#include <string.h>
using namespace std;

void printPattern(){
    int l = 1;
    int k;
    for(int i = 1; i <= 6; i++){
        for(int j = 0; j < 6; j++){
            cout<<l<<" ";
            k = l;
            l += i;
        }
        l = k;
        cout<<endl;
    }
}

int main()
{
    printPattern();
    return 0;
}
