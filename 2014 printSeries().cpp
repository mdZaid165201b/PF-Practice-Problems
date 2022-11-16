//----------OUTPUT----------
//  2 4 6 10 16 26 42 68 110 178 288 

#include <iostream>
#include <string.h>
using namespace std;



void printSeries(){
    int prev1 = 0;
    int prev2 = 2;
    
    for(int i = 2; i <= 12; i++){
        int temp = prev1 + prev2;
        cout<<temp<<" ";
        prev1 = prev2;
        prev2 = temp;
    }
}

int main()
{
    printSeries();
    return 0;
}
