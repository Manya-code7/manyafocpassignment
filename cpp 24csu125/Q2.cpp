#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the no. of elements you want to enter: ";
    cin>>size;
    int arr[size];
    int rev_arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter Element no."<<i+1<<": ";
        cin>>arr[i];
        rev_arr[(size-1)-i]=arr[i];
    }
    cout<<"[";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<arr[size-1]<<"]"<<endl;
    cout<<"Reversed:"<<endl;
    cout<<"[";
    for(int i=0;i<size-1;i++){
        cout<<rev_arr[i]<<" , ";
    }
    cout<<rev_arr[size-1]<<"]"<<endl;

    int first_largest=arr[0],second_largest,first_smallest=arr[0],second_smallest;
    for(int i=1;i<size;i++){
        if(arr[i]>first_largest){
            first_largest=arr[i];
        }
        if(arr[i]<first_smallest){
            first_smallest=arr[i];
        }
    }
    cout<<"First Largest Number = "<<first_largest<<endl;
    cout<<"First Smallest Number = "<<first_smallest<<endl;
    for(int i=0;i<size;i++){
        if(arr[i]<first_largest){
            second_largest=arr[i];
        }
        if(arr[i]>first_smallest){
            second_smallest=arr[i];
        }
    }
    cout<<"Second Largest Number = "<<second_largest<<endl;
    cout<<"Second Smallest Number = "<<second_smallest<<endl;
    return 0;  
}