#include <iostream>
using namespace std;
int main(){
    int Array[10], i;

    for(i=0;i<10;i++){
        cout<<"Masukkan nilai ke-"<<i+1<< " = ";
        cin>>Array[i];
    }
        cout << "=====================" << endl;
    for(i=0;i<10;i++){
        cout<<"Nilai ke-"<<i+1<<" = "<<Array[i]<<endl;
    }
    cout << "=====================" << endl;
    cout<<" Bilangan genap  = " << endl;

    for(i=0;i<10;i++){
            if(Array[i]%2==0){
    cout<<Array[i]<<" " << endl;
            }
    }
    cout << "=====================" << endl;
    cout<<" Bilangan ganjil = " << endl;

    for(i=0;i<10;i++){
        if(Array[i]%2!=0){
    cout<<Array[i]<<" " << endl;
        }
    }
    return 0;
}
