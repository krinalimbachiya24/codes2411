//finding first and last ocurrence of an element using binary search
#include<iostream>
using namespace std;
int firstOcurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if( arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}

int lastOcurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if( arr[mid] == key){
            ans = mid;
            start = mid +1;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}

int main(){
    int arr[11]={1,2,3,3,3,3,3,3,4,5,6};
    
   int total = lastOcurrence(arr,11,3) - firstOcurrence(arr,11,3);

     cout<< "the first occ is" << firstOcurrence(arr,11,3) <<endl;
     cout<< "the last occur is" << lastOcurrence(arr,11,3) <<endl;
     cout<<"the total number of ocurrences is" << total <<endl;
return 0;
}