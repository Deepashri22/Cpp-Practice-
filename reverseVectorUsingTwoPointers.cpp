#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl; 
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
    //while(i<=j){
        //swap v[i] & v[j]
        //int temp=v[i]; 
        //v[i]=v[j]; 
        //v[j]=temp; 
        //i++;
        //j--; 
 
    //}
    
    display(v); 

}