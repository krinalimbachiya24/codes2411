#include<iostream>
using namespace std;

int integersquareroot (int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e){

        long long int sqaure = mid*mid;
        if(sqaure == n){
            return mid;
        }
        if(sqaure < n){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double moreprecision(int n, int precision, int tempsoln){
    double factor = 1;
    double ans = tempsoln;
    for(int i = 0; i<precision; i++){
        factor = factor/10; 
            for(double j = ans; j*j<n; j = j + factor){
                ans = j;

            }
        
        
    }
    return ans;
}

 int main(){
    int n;
    cout <<"enter the number" << endl;
    cin>>n;
    int tempsoln = integersquareroot(n);
    
    cout<<"answer is" << moreprecision(n, 3, tempsoln) <<endl;
    return 0;
 }     
        
    
