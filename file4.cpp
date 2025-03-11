#include <iostream>

using namespace std;

float fungsiHitungRerata(floax, float y){
    return (x+y)/2;


}
string fungsiCekStatusKelulusan(float a){
    if (a >= 85){
        return "Lulus";
    }
    else {
        return "Gagal";
    }
}

int main()
{
    //numeric nNilai1, nNilai2, nRerata
    float Nilai1, Nilai2, Rerata;
    //Display "Masukkan Nilai1 = "
    cout << "Masukkan Nilai1 = ";
    //Accept nNilai1
    cin >> Nilai1;
    //Display "Masukkan Nilai2 = "
    cout << "Masukkan Nilai2 = ";
    //Accept nNilai2
    cin >> Nilai2;
    //Display "Status kelulusan = " + cStatus
    cout << "Status kelulusan = " << fungsiCekStatusKelulusan(fungsiHitungRerata(Nilai1, Nilai2));
}