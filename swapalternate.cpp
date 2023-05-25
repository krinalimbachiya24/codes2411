#include<iostream>
using namespace std;
//to swap alternate numbers
void swapAlternate(int arr[], int size ){
    for(int i = 0; i < size-1; i+=2){
        
        swap(arr[1], arr[i+1]);
        
    }
}

//to print array
void printArray(int array[], int size){
    
    for(int i = 0; i<size; i++){
        cout<< array[i] << " ";
    }
    cout<<endl;
}

//main function
int main(){
    int arr[5]={1,2,3,4,9};
    swapAlternate(arr, 5);
    printArray(arr,5);
    return 0;
}

