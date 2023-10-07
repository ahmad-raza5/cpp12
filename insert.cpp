#include<iostream>
using namespace std;

int main(){
    const int maxsize = 100;
    int n,arr[maxsize],pos,val;
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
    cout<<" Do you want to insert an element  :\n";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        
        cout<<" Enter the position to insert element \n";
        cin>>pos;
        if(pos<1 || pos>maxsize){
            cout<<" Invalid position \n";
        }
        else if(pos>n && pos<=maxsize){
            cout<<" Enter the value \n";
            cin>>val;
            arr[n]=val;n+=1;
        }
        else{
            cout<< " Enter the value \n";
            cin>>val;
            for(int i = n-1;i>=pos-1;i--){
                arr[i+1]=arr[i];
            }
            arr[pos-1]=val;
            n+=1;
        }
        
    }

    cout<<" Elements of array : \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}