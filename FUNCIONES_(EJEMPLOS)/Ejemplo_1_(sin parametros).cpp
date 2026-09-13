#include <iostream>
using namespace std;
int leerUnNumero()
{
int x;
cin >> x;
return x*x;
}

int main()
{
int a =3* leerUnNumero();
int b =3* leerUnNumero();
int c =3* leerUnNumero();
cout << "El gran total es: " << a+b+c << endl;
}

