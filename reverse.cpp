#include<iostream>
using namespace std;

//to swap the array //n/2 swaps == O(n) time complexity
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    
}
    
//to print the array //O(n) time complexity
void printArray(int array[], int size){
    
    for(int i = 0; i<size; i++){
        cout<< array[i] << " ";
    }
    cout<<endl;
}
//main function
int main(){
    
    int arr[5]={1,2,3,4,5};
    reverseArray (arr, 5);
    printArray(arr,5);
    
}