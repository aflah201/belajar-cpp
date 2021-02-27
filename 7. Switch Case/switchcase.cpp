#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Masukkan Nilai : ";
    cin >> a;
    cout << "Maks 3" << endl;

    switch(a){
    case 1:
        cout << "Ini Adalah angka 1" << endl;
        break;
    case 2:
        cout << "Ini Adalah angka 2" << endl;
        break;
    case 3:
        cout << "Ini Adalah angka 3" << endl;
        break;
    default:
        cout << "Keluar dari batas angka" << endl;
    }
    return 0;
}
