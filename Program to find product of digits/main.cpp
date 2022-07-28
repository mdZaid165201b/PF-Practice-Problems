#include <iostream>

using namespace std;
int main()
{
    int num ;
    cout<<"Enter Number =";
    cin>>num;
    int prod = 1;
    while(num != 0){
        int rem = num %10;
        prod = prod * rem;
        num = num /10;
    }
    cout<<prod;
    return 0;
}
