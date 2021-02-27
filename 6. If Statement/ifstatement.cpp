#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Masukkan Angka : ";
    cin >> a;

    if (a >= 80){
        cout << "Nilai anda A" << endl;
    }else if (a <= 79 && a >= 60){
        cout << "Nilai anda B" << endl;
    }else if (a <= 59 && a >= 40){
        cout << "Nilai Anda C" << endl;
    }else if (a <= 39 && a >= 20){
        cout << "Nilai Anda D" << endl;
    }else{
        cout << "Nilai Anda E" << endl;
    }
    return 0;
}
