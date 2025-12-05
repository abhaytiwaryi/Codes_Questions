#include<iostream>
using namespace std;

int main(){
    
    int arr[5];

    cout<<"Enter the number: "<<endl;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int found=0;

    cout<<"Numbers divisible by 3 and 5 are: "<<endl;
    
    for(int i=0;i<5;i++){
        if(arr[i]%5== 0 && arr[i]%3==0){
            cout<<arr[i]<<endl;
            found++;
        }
    }if(found == 0){
        cout<<"There is no number which is divisible by 3 and 5: "<<endl;
    }
}