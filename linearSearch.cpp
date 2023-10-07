#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int item){
    int loc = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]==item){
            loc=i+1;
            break;
        }
    }
    return loc;
}



int main(){
    const int maxsize = 100;
    int n,arr[maxsize],item,loc;
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
    cout<<" Enter the element you want to search "<<endl;
    cin>>item;
    loc= linearSearch(arr,n,item);
    if(loc==-1){
        cout<<" Element is not found "<<endl;
    }
    else{
        cout<<" Element is found at position "<<loc;
    }


}