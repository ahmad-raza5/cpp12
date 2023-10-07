#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 1;i<n;i++){
        for(int j= 0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    const int maxsize = 100;
    int arr[maxsize],n;
    cout<<" Enter the size of the array \n";
    cin>>n;
    while(n<1 || n>maxsize){
        cout<<" Invalid size \nEnter the size \n";
        cin>>n;
    }
    cout<<" Enter the element of the array \n";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<" Array in ascending order \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}