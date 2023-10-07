#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int item){
    int s =0,e=n-1,loc;
    int mid;
    while(s<=e){
        mid= (s+e)/2;
        if(arr[mid]==item){
            return mid+1;
        }
        else if(arr[mid]>item){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    } 
    return -1;
}

int main(){
    const int maxsize = 100;
    int arr[maxsize],n,item,loc;
    cout<<" Enter the size of the array : \n";
    cin>>n;
    while(n<1 || n>maxsize){
        cout<<" Invalid Size \n Enter the size \n";
    }
    cout<<" Enter the element of the array in ascending order \n";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" Enter the element you want to search "<<endl;
    cin>>item;
    loc = binarySearch(arr,n,item);
    if(loc ==-1){
        cout<<" Element is not found \n";
    }
    else{
        cout<<" Element is found at position "<<loc ;
    }
}