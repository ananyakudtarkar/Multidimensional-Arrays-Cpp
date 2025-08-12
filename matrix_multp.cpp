#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int mat1[10][10], mat2[10][10], result[10][10] = {0};

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Cannot multiply. Columns of Matrix 1 must equal rows of Matrix 2.\n";
        return 0;
    }

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> mat1[i][j];

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> mat2[i][j];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];

    cout << "\nProduct of the matrices:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}

/*
Enter rows and columns of Matrix 1: 1 2
Enter rows and columns of Matrix 2: 2 1
Enter elements of Matrix 1:
1 1
Enter elements of Matrix 2:
1 1

Product of the matrices:
2 


=== Code Execution Successful ===
*/
