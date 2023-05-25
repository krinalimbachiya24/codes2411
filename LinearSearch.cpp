#include<iostream>
using namespace std;

//O(n) complexity
bool searchElement(int arr[], int size, int key){
    
    for(int i = 0; i<=size; i++){
        if (key == arr[i]){
            
            return 1 ;

        }

    }
    return 0;
}
int main(){
    int arr[10] = {2,3,4,5,6,7,8,9,1,34};
    cout<<"enter the key" <<endl;
    int key;
    cin>> key;
    bool found;
    found = searchElement(arr, 10, key);
        if (found == 1){
            cout<<"key is present"<<endl;
        }
        else{
            cout<<"not present"<< endl;
        }
    }
    //whethere 9 is present or not




