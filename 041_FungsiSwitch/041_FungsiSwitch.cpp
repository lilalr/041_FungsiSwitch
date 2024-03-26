#include <iostream>
using namespace std;

int bilA, bilB;

void input()
{
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilA;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilB;
}

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}
