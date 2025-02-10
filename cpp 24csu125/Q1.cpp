#include<iostream>
using namespace std;
int main(){
    int num,check=0;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num>1){
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                check++;
            }
        }
        if(check==0){
            int new_check=0;
            cout<<"Given Number is a prime number"<<endl;
            cout<<"The next greater prime number is: ";
            for(int j=num+1;;j++){
                for(int i=2;i<=j/2;i++){
                    if(j%i==0){
                        new_check++;
                    }
                }
                if(new_check==0){
                    cout<<j;
                    break;
                    break;
                }else{
                    new_check=0;
                }
            }
        }else{
            cout<<"Given Number is a not prime number"<<endl;
            cout<<"Given Number's factors are: ";
            for(int i=1;i<=num/2;i++){
            if(num%i==0){
                cout<<i<<" , ";   
            }
        }   
        }
    }else{
        cout<<"Enter a valid input !!";
    }
    return 0;
}