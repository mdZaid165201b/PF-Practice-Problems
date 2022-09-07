/* 
University of Sargodha MSC 1st term Exam 2016 Long Question

1 2 3 4 5 
2 4 6 8 
3 6 9 
4 8 
5

*/


#include <iostream>

using namespace std;

void printPattern(){
    for(int i = 0; i < 5; i++){
        for(int  j = 0; j < (5-i); j++){
            if(i == 0){
                cout<<j+1<<" ";
            }
            else{
                int temp = (i + 1) * (j + 1);
                cout<<temp<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    printPattern();

    return 0;
}
