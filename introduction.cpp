#include <iostream>
using namespace std;


    class mahasiswa{
    public:
    int nim;
    string nama;
    float nilai;

    void print_data(){
        
        cout << "NIM = " << nim << endl;
        cout << "Nama = " << nama << endl;
        cout << "Nilai = " << nilai << endl;
    }

};

    int main(){
        mahasiswa mhs;
        mhs.nim = 52;
        mhs.nama = "Admaja Bahari";
        mhs.nilai = 90.5;
        
        mhs.print_data();



}