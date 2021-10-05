#include <iostream>
using namespace std;
int main(){
    int i, tinggi[5], sum=0;
    float ratarata;

    for(i=0;i<5;i++){
        cout <<"Data index ke-"<< i <<" = ";
        cin  >>tinggi[i];
        sum = sum + tinggi[i];
    }
        ratarata = (float)sum/(float)5;

        cout <<endl <<"Rata - rata tinggi badan = "<< ratarata << endl;
}
