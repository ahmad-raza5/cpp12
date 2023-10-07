#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j  = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    insertionSort(arr,n);
    cout<<" Array in ascending order \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}