#include <iostream>

using namespace std;

float Panjang, Lebar;

float fungsiHitungLuas(){
    return Panjang * Lebar;
}
int main()
{
    cout << "Masukkan Panjang = ";
    cin >> Panjang;
    cout << "Masukkan lebar = ";
    cin >> Lebar;
    cout << "Luas persegi panjang = "<< fungsiHitungLuas();
}//end

