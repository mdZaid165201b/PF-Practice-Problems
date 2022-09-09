/*
    arr[5,25,1,2,3]
    the maximum will be "25"
    
*/

#include <iostream>  
using namespace std;  

int findMaximum(int arr[], int length){
    int max = arr[0];
    for(int i = 0 ;i < length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    return max;
}


int main()  
{  
    int arr[] = {5,25,1,2,3};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<"Maximum Number => "<<findMaximum(arr,length);
    return 0;  
} 
