#include<iostream>
using namespace std;

bool isPossible( int arr[], int n, int m, int mid){
    int studentsCount = 1;
    int pageSum = 0;
    for(int i = 0; i<n; i++){
        if( pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else {
            studentsCount ++;
            if(studentsCount > m || arr[i] > mid){
                return false;
            }
            
            pageSum += arr[i];
        }
       
    }
    return true;
    
}
int bookallocate(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s+ (e-s)/2;
    while(s<=e){
        if (isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        
    }
    return ans;
}
int main() {
    int n = 4;
    int m = 2;
    int pages[] = {10, 20, 30, 40};
    cout << "The minimum value of the maximum number of pages in book allocation is: " << bookallocate(pages, n, m) << endl;
}