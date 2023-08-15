#include <iostream>
using namespace std;

unsigned long calcularFatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calcularFatorial(n - 1);
    }
}

int main()
{
    int numero;
    cout << "Digite o numero positivo\n";
    cin >> numero;

    if (numero < 0)
    {
        cout << "O numero fornecido não é positivo\n";
    }
    else
    {
        unsigned long resultado = calcularFatorial(numero);
        cout << "O fatorial de " << numero << " e: " << resultado << endl;
    }
}