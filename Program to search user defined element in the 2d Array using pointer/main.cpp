#include <iostream>

using namespace std;
int searchFromArray(int **arr,int rowLen,int columnsLen,int num){
  for(int i = 0;i<rowLen;i++){
      for(int j = 0;j<columnsLen;j++){
          if(arr[i][j] == num){
              cout<<"Value Found ="<<arr[i][j];
              return arr[i][j];
          }

      }
  }
}
int main()
{
    int noOfRows,noOfColumns;
    int value;
    int **data;
    cout<<"Enter no of rows = ";
    cin>>noOfRows;
    cout<<endl<<"Enter no of Columns= ";
    cin>>noOfColumns;
    data = new int *[noOfRows];
    for(int i = 0;i<noOfRows;i++){
        data[i] = new int[noOfColumns];
    }
    // for(int i = 0;i<noOfRows;i++){
    //     for(int j = 0;j<noOfColumns;j++){
    //         data[i][j] = j;
    //     }
    // }
    for(int i = 0;i<noOfRows;i++){

        for(int j = 0;j<noOfColumns;j++){
            cout<<"Enter Value =";
            cin>>value;
            data[i][j] = value;
        }
    }
    cout<<endl<<endl;
    for(int i = 0;i<noOfRows;i++){
        for(int j = 0;j<noOfColumns;j++){
            cout<<" "<<data[i][j]<<" ";
        }
        cout<<endl;
    }
    searchFromArray(data,noOfRows,noOfColumns,2);


    return 0;
}
