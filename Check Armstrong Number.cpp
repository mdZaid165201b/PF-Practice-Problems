/* 
Armstrong is if number is 153 then  (1*1*1) + (5*5*5) + (3*3*3) 
there sum must be equal to original number that is 153 otherwise
it is not Armstrong Number.
*/


#include <iostream>

using namespace std;

bool checkArmstrong(int num){
    int temp = num;
    int count = 0;
    while(num!=0){
        num = num / 10;
        count++;
    }
    num = temp;
    int mulRes = 1;
    int sum = 0;
    for(int i = 0; i < count; i++){
        int rem = num % 10;
        for(int  j = 0;j < count; j++){
            mulRes = mulRes * rem;
        }
        sum += mulRes;
        num  = num / 10;
        mulRes = 1;
    }
     return sum == temp ? true : false;
} 

int main()
{
    if(checkArmstrong(153)){ cout<<"Armstrong"; }
    else{ cout<<"Not Armstrong"; }
    return 0;
}
