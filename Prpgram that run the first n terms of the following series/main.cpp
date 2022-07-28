#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int num;
    cout<<"Enter Number";
    cin>>num;
    for(int i = 1;i<=num;i++){
        sum = sum + (i*i);
    }
    cout<<sum;
    return 0;
}
