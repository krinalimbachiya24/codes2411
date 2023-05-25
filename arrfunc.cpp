#include<iostream>
using namespace std;
//THIS CAN ONLY PRINT INTEGER ARRAY AND NOT CHARACTER/FLOAT ARRAY
void printArray(int array[], int size){
    
    for(int i = 0; i<size; i++){
        cout<< array[i] << " ";
    }
    cout<<"printing of array DONE"<<endl;
}
int main(){
     int third[4] = {0,1,2,3};
     printArray(third, 4);

     int fourth[5] = { 9, 3,3};
     printArray(fourth, 5);

}
//YOU CANT FIND THE ACTUAL SIZE OF AN ARRAY, ITS ONLY DEFINED BY THE SIZE PROVIDED