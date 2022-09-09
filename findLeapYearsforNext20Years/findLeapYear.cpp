/*
    
*/

#include <iostream>  
using namespace std;  

void nextLeapYears(int length, int presentYear = 2022){
    int arr[length];
    int originalYear = presentYear;
    for(int i = 0; i < length; i++){
        arr[i] = ++presentYear;
    }
    
    // bool isLeapYear = false;
    for(int i  = 0; i< length; i++){
        if(arr[i] % 4 == 0){
            cout<<arr[i]<<" ";
        }
        else if(arr[i] % 400 == 0){
            cout<<arr[i]<<" ";
        }
    }
}


int main()  
{  
    nextLeapYears(20);
    return 0;  
} 
