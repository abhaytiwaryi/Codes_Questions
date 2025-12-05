#include<iostream>
using namespace std;

int main() {
    int arr[5];

    cout<<"Enter the number: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int Mo5_Count = 0;
    for(int i=0;i<5;i++){
        if(arr[i]%5==0){
            Mo5_Count++;
        }
    } cout<<"Multiple of 5 Count: "<<Mo5_Count;

}