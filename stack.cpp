#include <iostream>
#include <iomanip>
using namespace std;
 int main() {
    int plh;
    int top = 0, i;
    int sisa;
    char Nama[20][20], Posisi[20][20];
    do { cout << "============================\n";
        cout << " MENU\n";
        cout << "============================\n";
        cout << "1.push Stack \n";
        cout << "2.pop stack \n";
        cout << "3.Cek stack \n";
        cout << "4.Delete Data  \n";
        cout << "5.print  \n";
        cout << "6.Exit \n";
        cout << "============================\n";
        cout << "Masukkan Pilihan : ";cin >> plh;

if (plh <= 6){ switch (plh)
        { case 1:
         if (top == 4) {
            cout << "Tumpukan Penuh!!" << endl;

        } else {
            cout << "Masukkan Nama pemain : "; cin >> Nama[top + 1];
            cout << "Masukkan Posisi : "; cin >> Posisi[top + 1];
            cout << "Stack sudah dimasukkan!!" << endl;
        top++; }
            break;
     case 2:
         if (top<1) {
        cout << "Tumpukan Sudah Kosong!!" << endl;
          } else {
        cout << "\nTumpukan yang ditampilkan :" << top << "\n\n";
        cout << "Nama : " << Nama[top] << endl;
          cout << "Posisi     : " << Posisi[top] << endl;
          top--; cout << "Tumpukan sudah dikeluarkan!!" << endl; } break;
    case 3:
        if (top == 3){
        cout << "Tumpukan Sudah Penuh!" << endl;
} else if
(top >= 1) { sisa = 3 - top;
        cout << "Tumpukan Masih Ada, Anda Mempunyai " << sisa << " Ruang Data" << endl;
} else if (top == 0) {
     cout << "Sekarang Tumpukan Habis!" << endl;
} break; case 4:
    top = 0;
    cout << "Tumpukan Sudah Didelete Semua!" << endl;
  break; case 5:
      cout << "NO || Nama|| Posisi ||\n";
if (top == 0)
    cout << "Tumpukan Kosong!" << endl;
else for (i = 1; i <= top;
i++){
    cout<<setiosflags(ios::left)<<setw(8)<<i;
    cout<<setiosflags(ios::left)<<setw(17)<<Nama[i];
    cout<<setiosflags(ios::left)<<setw(10)<< Posisi[i] << endl;
    }
    break; case 6: cout << "\n\nKeluar.........";
    break;
    } } else {
         cout << "Pilihan Salah , Silahkan Masukkan 1-6" << endl;
    } } while (plh != 6);
}
