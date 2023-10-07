#include<iostream>
using namespace std;
int partition(int [],int ,int);
void quickSort(int[],int ,int);

void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int maxsize =100;

    int arr[maxsize];
    int n;

    cout<<" Enter the size of the array "<<endl;
    cin>>n;


    while(n<1 || n>maxsize){
        cout<<" Invalid size \n Enter the size \n";
        cin>>n;
    }

    cout<<" Enter the element of the array \n";

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    cout<<" Sorted Array \n";
    printArray(arr,n);
    return 0;


}

void   quickSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int pivot = partition(arr,s,e);
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1,e);
}


int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int pivotindex;
    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot)
            count++;
        
    }
    pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);
    int i = s,j = e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if( (i<pivotindex && j>pivotindex) ){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;
}