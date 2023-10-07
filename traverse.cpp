#include<iostream>
using namespace std;

int main(){
    const int maxsize = 100;
    int n,arr[maxsize];
    cout<<" Enter the size of the array :\n";
    cin>>n;
    while(n<1 || n>maxsize){
        cout<<" Invalid size \n Enter the size of array \n";
        cin>>n;
    }

    cout<<" Enter the element of the array \n";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" Elements of array : \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}