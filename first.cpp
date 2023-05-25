#include<iostream>
using namespace std;
int main(){
    //declaring array
    //int number[15];
    //accessing array (it will be stored with random values)
    //cout<< "value at 2nd position" << number[1]<< endl;
    //cout<< "value at 14th position" << number[15] <<endl;

    //initializing an array
    int arr[5] = {0,1,2,3,4};
    cout<< "value at 2nd position" << arr[1]<< endl;
    cout<< "value at 5th position" << arr[4]<<endl;

    //printing the array
    int n = 5;
        for(int i = 0; i<n; i++){
            cout<< arr[i] << " ";
        
    }
 }