#include<iostream>
using namespace std;

int main(){

    /* int n;
    cin>>n;
    int dohajar=0,panch100=0,eksau=0,dosau= 0;
    if(n/2000>0){
        dohajar = n/2000;
        n%=2000;
        if(n/500>0){
            panch100=n/500;
            n%=500;
            if(n/200>0){
                dosau = n/200;
                n%=200;
                if(n/100>0){
                    eksau=n/100;
                    n%=100;
                }
            }
        }
    } 

    cout<<" Number of  2000 notes = "<<dohajar<<endl;
    cout<<" Number of  500 notes = "<<panch100<<endl;
    cout<<" Number of  200 notes = "<<dosau<<endl;
    cout<<" Number of  100 notes = "<<eksau<<endl;


    int a = 'z';
    cout<<a; */
    char ch = 'a';
    for(int i = 0;i<26;i++){
        cout<<ch<<" ";
        ch++;
    }
    

    return 0;

}