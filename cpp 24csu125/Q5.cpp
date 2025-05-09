#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>> &matrix){
    int n=matrix.size();
    for(int i = 0; i < n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

void printMatrix(const vector<vector<int>> &matrix){
    for(const auto &row : matrix){
        for(int num : row){
            cout<<num<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    cout<<"Enter the elements of the matrix:"<< endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"Enter Element("<<i+1<<","<<j+1<<"): ";
            cin>>matrix[i][j];
        }
    }
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);
    rotateMatrix(matrix);
    cout<<"Rotated Matrix:"<<endl;
    printMatrix(matrix);
    return 0;
}
