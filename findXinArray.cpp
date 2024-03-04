#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array:"<<endl; 
    cin>>n; 
    //int x;
    //cout<<"Enter the element for search:"<<endl; 
    //cin>>x; 
    int arr[n]; 
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the elements in array:"<<endl; 
        cin>>arr[i]; 
        
    }
    int x;
    cout<<"Enter the element for search:"<<endl; 
    cin>>x; 
    bool flag=false; 
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            flag=true; 

        }
    }
    if(flag==true) cout<<"Element found"; 
    else cout<<"Element not found"; 
}    