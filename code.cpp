#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of arr :"<<endl;
    cin>>size;
    int myarr[size];
    int arr[size];
    cout<<"Enter the number elements of arr :"<<endl;
    for(int i=0;i<size;i++){
        cin>>myarr[i];
    }
    cout<<"Without shifting array :";
    for(int i=0;i<size;i++){
        cout<<myarr[i]<<endl;
        
    }
    
    for(int i=0;i<size;i++){
        arr[(i+1)%size]=myarr[i];
    }
    cout<<"After shifting array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
        
    }

    return 0;

}