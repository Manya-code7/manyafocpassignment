#include <iostream>
#include <vector>
using namespace std;
void printSpiralPattern(int n){
    vector<vector<int>> matrix(n,vector<int>(n));
    int num=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            matrix[i][j]=num++;
        }
    }
    cout<<"Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    int top=0,bottom=n-1,left=0,right=n-1;
    cout<<"Spiral Order Sequence:"<<endl;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
        for (int i=right;i>=left;i--){
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
        for (int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<" ";
        }
        left++;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the spiral pattern: ";
    cin>>n;
    printSpiralPattern(n);
    return 0;
}
