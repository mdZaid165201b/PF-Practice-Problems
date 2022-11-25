
#include <iostream>

using namespace std;

int count(int arr[], int num, int len, int count = 0){
  if(len == 0){ return count; }
  if(len > 0){
    if(arr[len - 1] == num){
      return count(arr, num, len - 1, count + 1);
    }
  }
}




