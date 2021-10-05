#include <iostream>
using namespace std;
int main() {
	int nilai[3][4], i, n, sum;
    float ratarata;

	for (i=0;i<3;i++){
    for (n=0;n<4;n++){
        cout<<"nilai["<<i<<"]["<<n<<"] = ";
        cin>>nilai[i][n];
        sum = sum + nilai[i][n];
        }
	}
    for (i=0;i<3;i++){
    for (n=0;n<4;n++){
        cout<<nilai[i][n]<<" ";
        }cout << endl;
        ratarata = (float)sum/(float)12;
        }cout << endl << "Rata - rata = " << ratarata;
}
