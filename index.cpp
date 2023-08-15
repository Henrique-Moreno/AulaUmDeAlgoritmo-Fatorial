#include <iostream>

using namespace std;

unsigned long calcularFatorial(int n)
{
    long resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
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