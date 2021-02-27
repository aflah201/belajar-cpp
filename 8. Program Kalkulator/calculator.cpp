#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "SELAMAT DATANG DI KALKULATOR SEDERHANA" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Masukkan Nilai Pertama          : ";
    cin >> a;
    cout << "Masukkan Aritmatika +, -, /, *  : ";
    cin >> aritmatika;
    cout << "Masukkan Nilai Kedua            : ";
    cin >> b;
    //menggunakan Switch Case
    switch (aritmatika){
    case '+' :
        hasil = a + b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
        break;
    case '-' :
        hasil = a - b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
        break;
    case '*' :
        hasil = a * b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
        break;
    case '/' :
        hasil = a / b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
        break;
    default:
        cout << "OPERATOR ANDA SALAH" << endl;
        break;
    }
    //menggunakan IF Else
 /*   if (aritmatika == '+'){
        hasil = a + b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
    }
    else if (aritmatika == '-'){
        hasil = a - b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
    }
    else if (aritmatika == '*'){
        hasil = a * b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
    }
    else if (aritmatika == '/'){
        hasil = a / b;
        cout << "Hasil dari " << a << " "<< aritmatika << " " << b << " = " << hasil << endl;
    }
    else {
        cout << "OPERATOR ANDA SALAH" << endl;
    } */
    return 0;
}
