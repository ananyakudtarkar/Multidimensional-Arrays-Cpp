// Multi-dimensional array
#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    for (int i=0;i<3;i++){
        cout<<"Enter row "<<i+1<<" of 3x3 matrix: ";
        for (int j=0; j<3; j++){
            int k;
            cin>>k;
            mat[i][j] = k;
        }
    }
    cout<<"Given Matrix is: \n";
    for (int i=0;i<3;i++){
        for (int j=0; j<3; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
Enter row 1 of 3x3 matrix: 1 1 1
Enter row 2 of 3x3 matrix: 2 2 2
Enter row 3 of 3x3 matrix: 3 3 3
Given Matrix is:
1 1 1
2 2 2
3 3 3
*/
