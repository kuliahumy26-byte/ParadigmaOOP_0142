#include <iostream>
using namespace std;

class barang{
    public:
        string nama;
        int jumlah;
        string kategori; 
        string tanggalproduksi;
        
        void tampilan(){
            cout << "Nama Barang : " << nama << endl;
            cout << "Jumlah Barang : " << jumlah << endl;
            cout << "Kategori Barang : " << kategori << endl;
            cout << "Tanggal Produksi : " << tanggalproduksi << endl;
        }
};
int main(){
    barang elektronik;
    barang nonelectronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalproduksi = "1945-08-17";
    elektronik.tampilan();

    cout << endl;

    nonelectronik.nama = "supersemar";
    nonelectronik.jumlah = 1;
    nonelectronik.kategori = "Non Elektronik";
    nonelectronik.tanggalproduksi = "1970-03-11";
    nonelectronik.tampilan();
}