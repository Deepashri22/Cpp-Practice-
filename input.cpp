#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows:"<<endl; 
    cin>>m;
    int n;
    cout<<"Enter the number of columns:"<<endl;
    cin>>n; 
    int arr[m][n];
    for(int i=0;i<=m-1;i++){ 
          //row
        for(int j=0;j<=n-1;i++){
            cin>>arr[i][j]; 
        }
    }

    for(int i=0;i<=m-1;i++){ 
          //row
        for(int j=0;j<=n-1;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 

    }
    //cout<<endl; 


}