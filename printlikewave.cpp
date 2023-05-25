#include<iostream>
using namespace std;

void printlikewave(int arr[][4], int row, int col){
    for(int col = 0; col <4; col++){
        if(col%2 != 0){
            //odd index--> bottom to top
            for(int i = row -1; i>=0; i--){
                cout<< arr[i][col] << " ";
            }
            
        }
        else{
            for(int j=0; j<row; j++){
                cout<< arr[j][col] << " ";
            }
        }
  
    }
}
int main(){
    //taking input elements
    cout<<"taking inputs" << endl;
    int arr[3][4];
      for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>> arr[i][j];
        }
      }

      cout<< "printing the array" << endl;
 for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<< arr[i][j];
        } 
        cout<< endl;

    }

    printlikewave(arr,3,4);
}