
#include <iostream>

using namespace std;
int countNumber(int arr[] ,int num, int len, int count = 0){
    if(len == 0){ return count; }
    if(len > 0){
        if(num == arr[len-1]){
            return countNumber(arr, num, --len, ++count);
        }
        else{
            return countNumber(arr, num, --len, count);
        }
    }
    return 0;
}

int main()
{
    int arr[6] = {2,4,2,1,2, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    cout<<countNumber(arr, 4, len);

    return 0;
}
