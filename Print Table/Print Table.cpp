/* 
University of Sargodha MSC 1st term Exam 2016 Long Question

Print Table using of any number using function
*/


#include <iostream>

using namespace std;


void printTable(int num){
    for(int  i = 1; i <= 10; i++ ){
        cout<<num<<" * "<<i<<"  = "<<num*i;
        cout<<endl;
    }
}


int main()
{
    printTable(2);

    return 0;
}
