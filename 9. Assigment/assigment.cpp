#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Masukkan Nilai Awal      : ";
    cin >> a;
    cout << "Masukkan Nilai Assigment : ";
    cin >> b;
    cout << " " << endl;

    a += b;
    cout << "Ditambah  " << b << " Menjadi " << a << endl;

    a -= b;
    cout << "Dikurangi " << b << " Menjadi " << a << endl;

    a *= b;
    cout << "Dikali    " << b << " Menjadi " << a << endl;

    a /= b;
    cout << "Dibagi    " << b << " Menjadi " << a << endl;

    a %= b;
    cout << "Dimodulus " << b << " Menjadi " << a << endl;
    return 0;
}
