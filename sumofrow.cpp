#include<iostream>
using namespace std;
//to check if a number is present or not
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
//to print row wise sum
void printsum(int arr[][4], int row, int col){
    cout<< " printing sum" << endl;
    
    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<4; col++){
            sum = sum + arr[row][col];
        }
        cout<< sum << " ";
    }
    cout<< endl; 


}
//to print column wise sum
void printCsum(int arr[][4], int row, int col){
    cout<< " printing sum" << endl;
    
    for(int col = 0; col<4; col++){
        int sum = 0;
        for(int row = 0; row < 3; row++){
            sum = sum + arr[row][col];
        }
        cout<< sum << " ";
    }
    cout<< endl; 


}
//largest row sum
int largestrowsum(int arr[][4], int row, int col){
    int max = INT_MIN;
    int rowIndex = -1;
     
    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<4; col++){
            sum = sum + arr[row][col];
        }
        if(sum > max){
            max = sum;
            rowIndex = row;
        }
}
cout << "the maximum sum is" << max <<endl;
return row;
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
   
    
    printsum(arr,3,4);
     printCsum(arr,3,4);
     largestrowsum(arr,3,4);

return 0;
}