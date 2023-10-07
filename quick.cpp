#include<iostream>
using namespace std;

int findpivot(int arr[],int beg ,int end){
    int pivot = arr[beg];
    int count = 0;
    for(int i = beg+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex= count +beg;
    swap(arr[beg],arr[pivotIndex]);
    int i = beg,j=end;
    while(i<pivotIndex &&j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex &&j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int beg,int end){
    
    if(beg>=end){
        return;
    }
    int pivot = findpivot(arr,beg,end);
    quickSort(arr,beg,pivot-1);
    quickSort(arr,pivot+1,end);



}



int main(){
    int maxsize =100;

    int arr[maxsize];
    int n;

    cout<<" Enter the size of the array "<<endl;
    cin>>n;


    if(n<1 || n>maxsize){
        cout<<" Invalid size";
    }
    else{
        cout<<" Enter the element of the array \n";

        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        quickSort(arr,0,n-1);

        cout<<" Sorted Array \n";
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}