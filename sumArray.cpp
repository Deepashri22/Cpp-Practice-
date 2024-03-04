#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array:"<<endl; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the elements in array:"<<endl; 
        cin>>arr[i]; 
        
    }
    int sum=0; 
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i]; 
        
    }
    cout<<sum; 
     
}