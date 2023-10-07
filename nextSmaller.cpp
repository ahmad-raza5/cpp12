#include<iostream>
using namespace std;
#include<stack>

void printArray(int arr[],int s){
    for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void nextSmaller(int arr[],int s){
    stack<int> st;
    st.push(-1);

    for(int i = s-1;i>=0;i--){
        while(st.top()>=arr[i]){
            st.pop();
        }

       
        int a= arr[i];
        arr[i]=st.top();
        st.push(a);
    }

}

int main(){
    const int size = 10;
    int arr[size]={1,2 ,3,4 ,5,6,7 ,8,9,10};
    int arr2[size]={10,9 ,8,7 ,6,5,4 ,3,2,1};


    nextSmaller(arr,size);
    nextSmaller(arr2,size);

    printArray(arr,size);
    printArray(arr2,size);
}