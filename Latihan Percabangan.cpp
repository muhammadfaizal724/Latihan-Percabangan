#include <iostream>


using namespace std;

int main() {

    int a,b;
    int kode;
    	cout << "Program Kalkulator Muhammad Faizal"<< endl;
		cout << "Masukkan angka pertama : ";
		cin >> a;
        cout << "Masukkan angka kedua   : ";
		cin >> b;
    cout << "Pilihan Menu :" << endl;
    cout << "1.Penjumlahan (+)" << endl;
    cout << "2.Pengurangan (-)" << endl;
    cout << "3.Perkalian (*)" << endl;
    cout << "4.Pembagian (/)" << endl;
    cout << "Silahkan masukkan kode menu : ";cin >> kode;
    if (kode > 4 || kode < 1){
        cout << "Anda tidak memilih kode manapun "<< endl ;
		
    }
    else {
        
        if (kode == 1){
            cout << "Hasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl;
        }
        else if (kode == 2){
            cout << "Hasil pengurangan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl;
        }
        else if (kode == 3){
            cout << "Hasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;
        }
        else if (kode == 4){
            cout << "Hasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;
        }
    }
    return 0;
}

