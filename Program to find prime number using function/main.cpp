#include <iostream>

using namespace std;

bool isPrime(int val)
{

    if(val == 0 || val == 1)
    {
        return false;
    }
    else
    {
        for(int i = 2; i<val; i++)
        {
            if(val%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    isPrime(1) ? cout<<"Prime" : cout<<"Not Prime";

    return 0;
}
