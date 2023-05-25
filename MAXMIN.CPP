#include<iostream>
#include <limits.h>
using namespace std;
//O(n)
int getMax(int num[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = (maxi, num[i]);
        
       // if(num[i] > max){
        //    max = num[i];
      //  }
    }
    return max;
}
//O(n)
int getMin(int num[], int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        mini = (mini, num[i]);
        //if (num[i]<min){
       //     min = num[i];
      //  }
    }
    return min;
}

int main(){
    int size;
    cin >> size;
    int num[100];
    //taking input in array
    for (int i= 0; i<=size; i++){
           cout>> num[i];
    }
    cout<<"max value" <<getMax(num,size) <<endl;
    cout<<"min value" <<getMin(num,size) <<endl;

    }
