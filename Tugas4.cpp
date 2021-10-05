#include <iostream>
using namespace std;
int main() {
  int x, y, b, k, matriksA[10][10], matriksB[10][10], arrayC[10][10];

  cout << " Syarat= Jumlah Kolom dan Baris harus sama" << endl;
  cout << "Masukkan jumlah baris : ";
  cin >> b;
  cout << "Masukkan jumlah kolom : ";
  cin >> k;
  cout << "Masukkan elemen matriks pertama: \n";
  for(x = 0; x < b; x++){
    for(y = 0; y < k; y++){
      cin >> matriksA[x][y];
    }
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(x = 0; x < b; x++){
    for(y = 0; y < k; y++){
      cin >> matriksB[x][y];
    }
  }
  cout << "Hasil penjumlahan matriks: \n";
  for(x = 0; x < b; x++){
    for(y = 0; y < k; y++){
      arrayC[x][y] = matriksA[x][y] + matriksB[x][y];
      cout << arrayC[x][y] << "\t";
    }
    cout << endl;
  }
  return 0;
}
