#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr[],int low ,int high,int mid){
    int l1 = mid-low+1;
    int l2 = high-mid;

    int first [l1];
    int second[l2];
    int k = low;
    for(int i = 0;i<l1;i++){
        first[i]=arr[k++];
    }
    for(int i = 0;i<l2;i++){
        second[i]=arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k=low;
    while(index1<l1 && index2<l2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }

    while(index1<l1){
        arr[k++]=first[index1++];
    }
    while(index2<l2){
        arr[k++]=second[index2++];
    }
}


void mergeSort(int arr[],int beg,int end){
    if(beg>=end){
        return ;
    }

    int mid = (beg+end )/2;
    mergeSort(arr,beg,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,beg,end,mid);
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

        mergeSort(arr,0,n-1);

        cout<<" Sorted Array \n";
        printArray(arr,n);
    }


    return 0;
}

//what is identifiers 
// identifiers are the name of function ,class ,variable 
//
// new ,int ,delete are the not identifers


// variables 
// variables in c++ are used to store data 
// it is the name of memory location
// it starts with alphabate or underscore

//constants  
// in c++ , constants can not be changed in the whole program
// const keyword are used for define const
// syntax: const datatype variablename;


// oops   stand for object oriented programming language 
// class , inheritance , polymorphism ,object and abstraction are the features of oops
// 

//procedural programming languag

// c++