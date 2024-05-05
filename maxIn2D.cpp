#include<iostream>
#include<climits>
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
    int max=INT_MIN; 
    for(int i=0;i<=m-1;i++){ 
          //row
        for(int j=0;j<=n-1;i++){
            if(max<arr[i][j]) max=arr[i][j];  
        }
    }
    cout<<max; 

}