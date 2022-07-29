
#include <iostream>

using namespace std;

int main()
int len = 5;
{
    int temp = 0;
    for(int i = 0; i<len; i++)
    {
        for(int j = 0; j<len-i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
