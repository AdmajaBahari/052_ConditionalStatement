#include <iostream>

using namespace std;

float fungsiHitungLuasBerparameter(float a, float b){
    return a * b / 2;
}

int main()
{//main()
    float Panjang, Lebar;
    cout << "Masukkan Panjangnya = ";
    cin >> Panjang;
    cout << "Masukkan Lebarnya = ";
    cin >> Lebar;
    cout << "Luas Persegi Panjang = " << fungsiHitungLuasBerparameter(Panjang, Lebar);

}//end
























