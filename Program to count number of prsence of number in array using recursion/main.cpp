#include <iostream>

using namespace std;
int i,counting = 0;

void count(int arr[],int len,int num){
    for(;i<len;i++){
        if(arr[i] == num){
            counting++;
            i++;
            count(arr,len,num);
        }
    }
}

int main()
{
    int arr[] = {1,2,5,8,3,4,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    count(arr,len,2);
    cout<<"Counting = "<<counting;
    return 0;
}
