#include <iostream>
using namespace std;
int main(){
    char nama[5][5];
    float responsi[5], uts[5], uas[5];
    float rata[5];
    float no;
    int i;

    for (i=0; i<5; i++){
        cout << "Masukkan Nama Mahasiswa    = ";
        cin >>nama[i];
        cout << "Masukkan Nilai Responsi    = ";
        cin >>responsi[i];
        cout << "Masukkan Nilai UTS         = ";
        cin >>uts[i];
        cout << "Masukkan Nilai UAS         = ";
        cin >>uas[i];
        rata[i]=((responsi[i]+uts[i]+uas[i])/3);
        cout << " Nilai Akhir = " <<rata[i];
        cout << endl;
        cout << "-------------------"<< endl;
    }
    for (i=0; i<5; i++){
        cout << "Masukkan Nama Mahasiswa    = " <<nama[i] <<endl;
        cout << "Masukkan Nilai Responsi    = " <<responsi[i] <<endl;
        cout << "Masukkan Nilai UTS         = " <<uts[i] <<endl;
        cout << "Masukkan Nilai UAS         = " <<uas[i] <<endl;
        rata[i]=((responsi[i]+uts[i]+uas[i])/3);
        cout << " Nilai Akhir = " <<rata[i];
        cout << endl;
        cout << "-------------------"<< endl;
    }
    return 0;
}
