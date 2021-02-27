#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    bool hasil,hasil1, hasil2;
    //LOGIKA NOT
    hasil1 = !(a == 5);
    hasil2 = !(b == 5);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << " " << endl;
    cout << "Operator Logika NOT" << endl;
    cout << "!(a == 5) = " << hasil1 << endl;
    cout << "!(b == 5) = " << hasil2 << endl;
    cout << " " << endl;
    //LOGIKA AND
    cout << "Operator Logika AND" << endl;
    hasil = (a == 5) && (b == 10);
    cout << "(a == 5) && (b == 10) = " << hasil << endl;
    hasil = (a == 5) && (b == 8);
    cout << "(a == 5) && (b == 8)  = " << hasil << endl;
    hasil = (a == 8) && (b == 10);
    cout << "(a == 8) && (b == 10) = " << hasil << endl;
    hasil = (a == 8) && (b == 8);
    cout << "(a == 8) && (b == 8)  = " << hasil << endl;
    cout << " " << endl;
    //LOGIKA OR
    cout << "Operator Logika OR" << endl;
    hasil = (a == 5) || (b == 10);
    cout << "(a == 5) || (b == 10) = " << hasil << endl;
    hasil = (a == 5) || (b == 8);
    cout << "(a == 5) || (b == 8)  = " << hasil << endl;
    hasil = (a == 8) || (b == 10);
    cout << "(a == 8) || (b == 10) = " << hasil << endl;
    hasil = (a == 8) || (b == 8);
    cout << "(a == 8) || (b == 8)  = " << hasil << endl;
    cout << " " << endl;
    //LOGIKA NAND
    cout << "Operator Logika NAND" << endl;
    hasil = !((a == 5) && (b == 10));
    cout << "!((a == 5) && (b == 10)) = " << hasil << endl;
    hasil = !((a == 5) && (b == 8));
    cout << "!((a == 5) && (b == 8))  = " << hasil << endl;
    hasil = !((a == 8) && (b == 10));
    cout << "!((a == 8) && (b == 10)) = " << hasil << endl;
    hasil = !((a == 8) && (b == 8));
    cout << "!((a == 8) && (b == 8))  = " << hasil << endl;
    cout << " " << endl;
    //LOGIKA NOR
    cout << "Operator Logika NOR" << endl;
    hasil = !((a == 5) || (b == 10));
    cout << "!((a == 5) || (b == 10)) = " << hasil << endl;
    hasil = !((a == 5) || (b == 8));
    cout << "!((a == 5) || (b == 8))  = " << hasil << endl;
    hasil = !((a == 8) || (b == 10));
    cout << "!((a == 8) || (b == 10)) = " << hasil << endl;
    hasil = !((a == 8) || (b == 8));
    cout << "!((a == 8) || (b == 8))  = " << hasil << endl;
    cout << " " << endl;
    return 0;
}
