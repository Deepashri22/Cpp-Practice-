#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array:"<<endl; 
    cin>>n; 
    int x;
    cout<<"Enter the element for search:"<<endl; 
    cin>>x; 
    int arr[n]; 
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the elements in array:"<<endl; 
        cin>>arr[i]; 
        
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            cout<<"Present"<<endl;

        }
        else{
            cout<<"Not present"<<endl; 
        }
        break; 
    }
}    