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
