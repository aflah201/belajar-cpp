#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Masukkan Angka untuk Looping : ";
    cin >> a;
    cout << " " << endl;
    //WhileLoop
/*    while(a <= 10){
        cout << "Loop " << a << endl;
        a++;
    }
*/

    //DoWhileLoop
/*    do{
        cout << "Loop " << a << endl;
        a++;
    }while(a <= 10);
*/

    //ForLoop
    for (int b = a; a <= 10; a++){
        cout << "Loop " << a << endl;
    }
    return 0;
}
