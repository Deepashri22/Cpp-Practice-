#include<iostream>
using namespace std; 
void swap(int &x,int &y){ //pass by reference sasta wala 
    int temp= x;  
    x=y;
    y=temp;
    return; 
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b); //pas by value= only values were passed
    cout<<a<<" "<<b; 
} 