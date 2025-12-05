#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the numbers: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int Mo5_3_Count = 0;

    for(int i=0;i<5;i++){
        if(arr[i]%5==0 && arr[i]%3==0){
            Mo5_3_Count++;
        }
    }
    if(Mo5_3_Count > 0){
        cout<<"These Numbers are divisible by both 3 and 5: "<<Mo5_3_Count<<endl;
    } else{
        cout<<"There are no numbers which are divisible by both 3 and 5"<<endl;
    }
}