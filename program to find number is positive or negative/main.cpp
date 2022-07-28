#include <iostream>

using namespace std;
bool isPositive(int val){
    return (val>=0)? true : false;
}
int main()
{
    isPositive(5) ? cout<<"Number is Positive" : cout<<"Number is negative";
    return 0;
}
