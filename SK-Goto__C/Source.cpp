#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int angka = 0;
cobaLagi:
    cout << "Masukan Angka : "; cin >> angka;
    if (angka != 5) {
        goto cobaLagi;
    }

    _getch();
    return 0;
}