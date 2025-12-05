#include<iostream>
using namespace std;
int main(){
    
    int arr[5];
    cout<<"Enter elements: ";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int largest = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    
    int secondLargest = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]<secondLargest){
            secondLargest = arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]!=largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }cout<<"The seonnd largest number is: "<<secondLargest<<endl;
}