#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 9;

    bool hasil1, hasil2;
    //samadengan
    hasil1 = (a == b);
    cout << "Jika hasil 0 maka hasil salah" << endl;
    cout << "Jika hasil 1 maka hasil benar" << endl;
    cout << "Hasil A == B adalah : " << hasil1 << endl;
    cout << " " << endl;
    //tidak samadengan
    hasil2 = (a != b);
    cout << "Jika hasil 0 maka hasil salah" << endl;
    cout << "Jika hasil 1 maka hasil benar" << endl;
    cout << "Hasil A != B adalah : " << hasil2 << endl;
    cout << " " << endl;
    //kurang dari
    hasil1 = (a < b);
    cout << "Jika hasil 0 maka hasil salah" << endl;
    cout << "Jika hasil 1 maka hasil benar" << endl;
    cout << "Hasil A < B adalah : " << hasil1 << endl;
    cout << " " << endl;
    //kurang dari samadengan
    hasil1 = (a <= b);
    cout << "Jika hasil 0 maka hasil salah" << endl;
    cout << "Jika hasil 1 maka hasil benar" << endl;
    cout << "Hasil A <= B adalah : " << hasil1 << endl;
    cout << " " << endl;
    //lebih dari
    hasil2 = (a > b);
    cout << "Jika hasil 0 maka hasil salah" << endl;
    cout << "Jika hasil 1 maka hasil benar" << endl;
    cout << "Hasil A > B adalah : " << hasil2 << endl;
    cout << " " << endl;
    //lebih dari samadengan
    hasil2 = (a >= b);
    cout << "Jika hasil 0 maka hasil salah" << endl;
    cout << "Jika hasil 1 maka hasil benar" << endl;
    cout << "Hasil A >= B adalah : " << hasil2 << endl;
    cout << " " << endl;
    return 0;
}
