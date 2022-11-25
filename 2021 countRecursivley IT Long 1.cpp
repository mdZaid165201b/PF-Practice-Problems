
#include <iostream>

using namespace std;

int countNumber(int arr[], int num, int len, int count = 0){
  if(len == 0){ return count; }
  if(len > 0){
    if(arr[len - 1] == num){
      return countNumber(arr, num, len - 1, count + 1);
    }
    else{
      return countNumber(arr, num , len - 1, count);
    }
  }
  return 0;
}


int main(){
  return 0;
}




