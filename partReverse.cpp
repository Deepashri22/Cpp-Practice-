#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl; 
}
void reversePart(int i,int j,vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp; 
        i++;
        j--;
    }
    return; 
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    display(v); 
    //reverse using two pointers/ for ya while loop
    int i=0;
    int j=v.size()-1; 
     
 
    //keep swapping
    reversePart(0,4,v);
    display(v); 

}