#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    //Fungsi AKAR
/*
    int x;
    cout << "Masukkan Nilai : ";
    cin >> x;
    cout << "Akar dari " << x << " Adalah " << sqrt(x) << endl;
*/
    //Fungsi RANDOM (DADU)

    char lanjut;
    while (true){
        cout << "Lemparkan Dadu (y/n) : ";
        cin >> lanjut;
        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        }else if(lanjut == 'n'){
            break;
        }else{
            cout << "Gagal" << endl;
        }
    }
    cin.get();
    return 0;
}
