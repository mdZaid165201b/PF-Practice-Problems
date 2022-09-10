/*
    Output will be 
    2 4 8 16 32 64 128 256 512 1024 2048 

*/

#include <iostream>

using namespace std;

void printNumber(){
    int multiplier = 2;
    int pro = 1;
    for(int i = 0; i < 11; i++){
        pro = pro * multiplier;
        cout<<pro<<" ";
    }
}
int main()
{
    printNumber();
    return 0;
}
