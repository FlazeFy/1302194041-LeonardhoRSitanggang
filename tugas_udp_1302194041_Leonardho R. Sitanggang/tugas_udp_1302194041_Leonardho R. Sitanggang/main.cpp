#include <iostream>
#include "udp.h"
//1302194041 Leonardho R Sitanggang
using namespace std;

int main()
{
    char x[20];

    cout << "Masukkan UDP Header: ";
    cin >> x;
    cout << endl;
    cout << "Hasil: " << endl;

    scNumber(x);
    desNumber(x);
    totLength(x);
    directed(x);
}
