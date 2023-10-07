#include<iostream>
using namespace std;

int main(){
    const int maxsize = 100;
    int n,arr[maxsize],pos;
    cout<<arr;
    char ch;
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
    cout<<" Do you want to delete element  :\n";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        
        cout<<" Enter the position to delete element \n";
        cin>>pos;
        if(pos<1 || pos>n){
            cout<<" Invalid position \n";
        }
        else{
            for(int i = pos-1;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            n-=1;
        }
        
    }

    cout<<" Elements of array : \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}