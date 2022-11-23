/*
----------OUTPUT-----------
1 2 3 4 5 6 
6 8 10 12 14 16 
16 19 22 25 28 31 
31 35 39 43 47 51 
51 56 61 66 71 76 
76 82 88 94 100 106 

*/




#include <iostream>
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
