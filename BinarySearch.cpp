#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start<=mid){
        if( arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;

    }
    return -1;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int arr2[5]={1,2,3,4,5};
    int index = binarySearch(arr, 6, 5);
    int index2 = binarySearch(arr2,5,4);
     cout<<"the index in first array is" <<index<<endl;
     cout<<"the index in second array is" << index2 <<endl;
return 0;
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
           int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end-start)/2;
    while(start<=mid){
        if( nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;

    }
    return -1;
    
    }
   
};