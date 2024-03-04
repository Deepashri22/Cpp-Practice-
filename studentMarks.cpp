#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the marks:"<<endl; 
        cin>>arr[i]; 
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            cout<<"Marks less than 35 are:"<<endl; 
            cout<<i<<endl; 
        }
    }
}