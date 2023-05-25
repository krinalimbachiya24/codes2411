#include<iostream>
using namespace std;
void removeElement(int arr[], int size, int val) {
        for(int i = 0; i<size; i++){
            if(val == arr[i]){
                
                arr[i] =0;
            }
            
        }
        
        
    }



void printArray(int arr[], int size){
    for(int i= 0; i< size; i++){
        cout<< arr[i] << " ";



    }
}


int main(){
    int val;
    cin>>val;
    int array[5]= {1,2,2,2,5};
    removeElement(array,5,val);
    
    printArray(array,5);
}
