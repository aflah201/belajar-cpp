#include <iostream>

using namespace std;

int main()
{
    int n;
    int angkaN, angka1, angka2;
    cout << "Program Deret Fibonacci" << endl;
    cout << "-----------------------" << endl;
    cout << "Masukkan angka awal : ";
    cin >> n;
    cout << " " << endl;

    angka1 = 1;
    angka2 = 0;
    for (int i = 1; i <= n; i++){
        angkaN = angka1 + angka2;
        angka2 = angka1;
        angka1 = angkaN;

        cout << angkaN << endl;
    }
    return 0;
}
