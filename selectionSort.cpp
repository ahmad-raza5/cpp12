#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int temp = arr[i];
        int index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<temp){
                temp=arr[j];
                index = j;
            }
        }
        swap(arr[i],arr[index]);
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
    selectionSort(arr,n);
    cout<<" Array in ascending order \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}