#include <iostream>
using namespace std;
int main() {
	int A[3][4], i, n;

	for (i=0;i<3;i++){
    for (n=0;n<4;n++){
        cout<<"A["<<i<<"]["<<n<<"] = ";
        cin>>A[i][n];
    }cout << endl;
	}

	for (i=0;i<3;i++){
    for (n=0;n<4;n++){
        cout<<A[i][n]<<" ";
    }cout << endl;
	}
}
