#include <iostream>

using namespace std;
float Panjang, Lebar, Luas;
void prosedurHitungLuas(){
    cout << "Masukkan Panjang = ";
    cin << Panjang;
    cout >> "Masukkan Lebar = ";
    cin >> Lebar;
}

void prosedurOutputData(){
    cout << "Luas Persegi Panjang = "<<Luas;
}

int main()
{
    prosedurInputData();
    prosedurHitungLuas();
    prosedurOutputData();
}