
#include <iostream>
#include <string.h>
using namespace std;
void toLowerCase(char arr[], int len){
    for(int i =0; i < len; i++){
        arr[i] = int(arr[i]) + 32;
    }
    
}
void print(char arr[], int len){
    for(int i = 0;i < len; i++){ cout<<arr[i]<<" "; }
}

int main()
{
    char letters[10] = {'A', 'B', 'C'};
    toLowerCase(letters, strlen(letters));
    print(letters, strlen(letters));
    return 0;
}
