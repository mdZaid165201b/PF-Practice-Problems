#include <iostream>

using namespace std;
//Output Question
int main()
{
    int arr[5] = {65,67,68};
    int *ptr1 = arr;
    char *ptr2 = (char *)(arr);
    cout<<*(ptr1+2)<<"  "<<*(ptr2+4)<<endl;

    return 0;
}
