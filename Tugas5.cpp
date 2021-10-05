#include<iostream>
using namespace std;
int main(){
    int transpose[4][4], matrix[4][4]={{12, 6, 9, 15},{2, 7, 1, 20},{8, 11, 5, 2},{10, 4, 8, 7}};
    int i,j;
    for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++){
        transpose[j][i] = matrix[i][j];
        }
    }
    cout<<("\nMatriks [4x4]\n");
    for (i = 0; i < 4; i++)
        {
        for (j = 0; j < 4; j++)
        {
        cout << matrix[i][j] << "\t";
        }
        cout <<endl;
    }
    cout <<("\nTranspose Matriks [4x4]\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
        cout << transpose[i][j] << "\t";
        }
        cout <<endl;
    }
}
