#include <iostream>

using namespace std;
int main()
{
    int size;
    cout<<"Enter Size=";
    cin>>size;
    for(int i = size;i>0;i--){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
