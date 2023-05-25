#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column){
    for(int row =0; row<3; row++){
        for(int column = 0; column <4; column++){
            if(arr[row][column] == target){
            return 1;
            }
        }
    }
    return 0;
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

cout<< "enter the element to search" << endl;
    int target;
    cin >> target;
    if(isPresent(arr,target,3,4)){
        cout<< "element found" << endl;
    }
    else{
        cout<<"element not found" << endl;
    }
    return 0;


}