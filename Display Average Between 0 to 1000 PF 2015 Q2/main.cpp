#include <iostream>

using namespace std;
int findAvg(){
    int avg = 0;
    int sum = 0;
    for(int i = 0; i< 1000; i++){
        sum = sum + i;
    }
    avg = sum/1000;
    return avg;
}
int main()
{
    cout<<findAvg();
    return 0;
}
