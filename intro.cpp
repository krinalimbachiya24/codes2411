#include<iostream>
using namespace std;
int main(){
   // int arr[2][5] = {1,2,3,4,5,6,7,8,9,7};
    int arr[2][5] = {{1,2,3,4,5}, {2,3,4,5,6}};
// this specifies the elements in row 1 and row 2

    /* i is for rows
     j is for columns
    row wise input
    for(int i = 0; i<5; i++){
       for(int j = 0; j<2; j++){
           cin>> arr[i][j];
        }
    }
    */

    /* column wise input
     for(int j = 0; j<5; j++){
        for(int i = 0; i<2; i++){
            cin>> arr[i][j];
        }
    }
    */

     for(int i = 0; i<2; i++){
        for(int j = 0; j<5; j++){
            cout<< arr[i][j];
        }
        cout<< endl;
        

    }
    return 0;
}