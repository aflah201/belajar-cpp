#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Contoh Increment" << endl;
    cout << "Masukkan Nilai : ";
    cin >> a;
    cout << " " << endl;
    cout << "Nilai Awal           : " << a << endl;
    cout << "Nilai Increment (+1) : " << a++ << endl;
    cout << "Nilai Hasil          : " << a << endl;
    cout << " " << endl;
    cout << "Contoh Decrement" << endl;
    cout << "Masukkan Nilai : ";
    cin >> b;
    cout << " " << endl;
    cout << "Nilai Awal           : " << b << endl;
    cout << "Nilai Decrement (-1) : " << b-- << endl;
    cout << "Nilai Hasil          : " << b << endl;
    return 0;
}
