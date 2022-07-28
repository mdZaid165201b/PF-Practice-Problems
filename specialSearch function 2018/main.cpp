#include <iostream>

using namespace std;
void specialSearch(int arr[],int len,int key, int &numLess, int &numGreater, int &numEqual){
    for(int i = 0;i<len;i++){
        if(arr[i] == key){numEqual++;}
        if(arr[i] > key){numGreater++;}
        if(arr[i] < key){numLess++;}
    }
}
int main()
{
    int arr[5] = {2,4,5,6,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key;
    int numLess,numGreater,numEqual = 0;
    cout<<"Enter Key to find:";
    cin>>key;



    specialSearch(arr,len,key,numLess,numGreater,numEqual);
    cout<<numLess<<endl<<numGreater<<endl<<numEqual;
    return 0;
}
