/* 
1^2-2^2+3^2-4^2+.............-20^2

PF MID QUESTION

the sum will be 210;
*/


#include <iostream>

using namespace std;

void printSumofSeries(){
    bool isNegative = false;
    int sum = 0;
    for(int i = 1;i <=20; i++){
        if(isNegative){
            sum-= (i * i);
        }
        else{
            sum+= (i*i);
        }
        isNegative =  isNegative ? false : true;
    }
    
    cout<<sum;
}


int main()
{
    printSumofSeries();

    return 0;
}
