
/*
  if 6521 is entered then the answer will be 1256 
*/

#include <iostream>

using namespace std;

int reverseNumber(int number){
    int multiplier = 0;
    
    while(number != 0){
        int remainer = number % 10;
        multiplier = multiplier * 10 + remainer;
         number /= 10;
    }
    
    return multiplier;
}

int main()
{
    int num;
    cout<<"Enter Number:";
    cin>>num;
    cout<<reverseNumber(num);
    

    return 0;
}
