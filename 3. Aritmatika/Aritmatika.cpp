#include <iostream>

using namespace std;

main()
{
    double a = 5;
    int b = 2;
    double hasil;

    cout << "Nilai A : " << a << endl;
    cout << "Nilai B : " << b << endl;
    cout << " " << endl;

    //penjumlahan
    hasil = a + b;
    cout << "Penjumlahan" << endl;
    cout << a << " + " << b << " = " << hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << "Pengurangan" << endl;
    cout << a << " - " << b << " = " << hasil << endl;

    //perkalian
    hasil = a * b;
    cout << "Perkalian" << endl;
    cout << a << " * " << b << " = " << hasil << endl;

    //pembagian
    hasil = a / b;
    cout << "Pembagian" << endl;
    cout << a << " / " << b << " = " << hasil << endl;

    //modulus
 //   hasil = a % b;
 //   cout << "Modulus" << endl;
 //   cout << a << " % " << b << " = " << hasil << endl;
    return 0;
}
