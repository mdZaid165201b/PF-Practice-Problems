/*
    Pattern is 
     *
    ***
   *****
  *******
 *********

*/

#include <iostream>  
using namespace std;  

void printSpecialParamid(int length){
    for(int i = 0; i < 5; i++){
        // for Space printing
        for(int j = 0;j < (5 - i); j++){
            cout<<" ";
        }
        int printingStar = 2 * i +1;
        for(int  k = 0; k < printingStar; k++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}


int main()  
{  
    printSpecialParamid(5);
    return 0;  
} 
