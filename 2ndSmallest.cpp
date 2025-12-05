#include<iostream>
using namespace std;

int main(){

    int arr[5];

    cout<<"Enter elements: ";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int smallest = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    int secondSmallest = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>secondSmallest){
            secondSmallest = arr[i];
        }
    }

    for(int i=0;i<5;i++){
        if(arr[i]!=smallest && arr[i]<secondSmallest){
            secondSmallest = arr[i];
        }
    }cout<<"The Second Smallest is: "<<secondSmallest<<endl;
}