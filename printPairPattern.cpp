/*
    (1,1)(1,2)(1,3)(1,4)(1,5)
    (2,2)(2,3)(2,4)(2,5)
    (3,3)(3,4)(3,5)
    (4,4)(4,5)
    (5,5)

*/


#include <iostream>

using namespace std;
void printPair(int start, int end){
    for(int i = 1; i <= end; i++){
        for(int j = start; j <= end; j++){
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
        start++;
    }
}

int main()
{
    printPair(1,5);
    return 0;
}
