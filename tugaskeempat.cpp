#include <iostream>
using namespace std;

int main()
{
    int bilangan1;
    int bilangan2 ;
    string status;
    srand(time(0));
    bilangan = rand() % 10;
    bilangan = rand() % 10;
    if (bilangan1 == bilangan2)
    {
        status = "Bilangan 1 sama dengan bilangan 2";
    }
    else if (bilangan1 > bilangan2)
    {
        status = "bilangan 1 lebih besar dari bilangan 2";
    }
    else 
    {
        status = "Bilangan 1 lebih kecil dari bilangan 2";
    }

    cout << "Bilangan pertama = " << bilangan1 << endl;
    cout << "Bilangan kedua = " << bilangan2 << endl;
    cout << "statusnya = " << status << endl;
}