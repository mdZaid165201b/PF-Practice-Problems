#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter number"<<endl;
    cin>>a;
    cout<<"enter number"<<endl;
    cin>>b;
    cout<<"enter number"<<endl;
    cin>>c;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    int temp;

    for(int  i = 0; i< 3;i++){
        for(int j = 0;j<3;j++){
            if(arr[j]<arr[j+1]){
                continue;
            }
            else{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<arr[1];
    return 0;
}
