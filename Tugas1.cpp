#include <iostream>
using namespace std;
int main() {
  int max, min, n, i = 1, array[10];

  cout << "Masukkan jumlah data: ";
  cin >> n;
  cout << "Masukkan " << n << " angka\n";

  for (i = 0; i < n; i ++) {
    cout << "Elemen ke-" <<(i+1) <<": ";
    cin >> array[i];
  }
  max = array[0];
  for(i = 0; i < n; i++) {
    if (array[i] > max)  {
      max = array[i];
    }
  }
  min = array[0];
  for(i = 0; i < n; i++) {
    if (array[i] < min)  {
      min = array[i];
    }
  }
  cout << " Nilai terbesar adalah    = " << max << endl;
  cout << " Nilai terkecil adalah    = " << min << endl;

}
